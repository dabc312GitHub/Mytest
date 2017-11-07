/*#include <iostream>
using namespace std;

int main()
{
   char board[10][10];
   char temp_board[10][10];

   // initialize the board to blank pieces
   for (int i = 0; i < 10; i++)
   {
       for (int j = 0; j < 10; j++)
       {
           board[i][j] = ' ';
       }
   }

   // do this for all pieces, that is, create a 10x10 blank array
   // with x's for a piece, or maybe different letters to distinguish
   // between them later

   // now load a piece
   for (int i = 0; i < 10; i++)
   {
       for (int j = 0; j < 10; j++)
       {
           board[i][j] = piece[i][j];
       }
   }
   // So each spot on the board equals the piece
   // then maybe as the piece moves down

   for (int i = 0; i < 10; i++)
   {
       for (int j = 0; j < 10; j++)
       {
           board[i][j+1] = piece[i][j];
           if ( j+1 > 10)
               break; // so you don't exceed the bounds of the array
       }
   }
   // I may not have the indexes on the arrays right.  I don't have time to
   // test it at the moment.  But add 1 to the y value of the array
   for (int i = 0; i < 10; i++)
   {
       for (int j = 0; j < 10; j++)
       {
           temp_board[i][j] = board[i][j];
           board[i][j] = ' '; // to clear the board
       }
   }

   // then do this again
   for (int i = 0; i < 10; i++)
   {
       for (int j = 0; j < 10; j++)
       {
           board[i][j+2] = piece[i][j];
           if ( j+2 > 10)
               break; // so you don't exceed the bounds of the array
       }
   }
   // now add 2 to the y value of the array.  You should probably make this
   // a variable that you increment every time.  Then if the bottom of the piece
   // reaches the bottom of the board, save the board like this and start a
   // new piece
   return 0;
}
*/

#include <iostream>
#include <vector>
#include <random>
#include <conio.h>
#include <cstdlib>
#include "time.h"



std::vector<std::vector<int>> stage(22, std::vector<int>(13, 0));
std::vector<std::vector<int>> block =
{
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 }
};

std::vector<std::vector<int>> field(22, std::vector<int>(13, 0));
// coordinate
int y = 0;
int x = 4;
bool gameover = false;
int GAMESPEED = 20000;


std::vector<std::vector<std::vector<int>>> block_list =
{
    {
        { 0, 1, 0, 0 },
        { 0, 1, 0, 0 },
        { 0, 1, 0, 0 },
        { 0, 1, 0, 0 }
    },
    {
        { 0, 0, 0, 0 },
        { 0, 1, 1, 0 },
        { 0, 1, 0, 0 },
        { 0, 1, 0, 0 }
    },
    {
        { 0, 0, 1, 0 },
        { 0, 1, 1, 0 },
        { 0, 1, 0, 0 },
        { 0, 0, 0, 0 }
    },
    {
        { 0, 1, 0, 0 },
        { 0, 1, 1, 0 },
        { 0, 0, 1, 0 },
        { 0, 0, 0, 0 }
    },
    {
        { 0, 0, 0, 0 },
        { 0, 1, 0, 0 },
        { 1, 1, 1, 0 },
        { 0, 0, 0, 0 }
    },
    {
        { 0, 0, 0, 0 },
        { 0, 1, 1, 0 },
        { 0, 1, 1, 0 },
        { 0, 0, 0, 0 }
    },
    {
        { 0, 0, 0, 0 },
        { 0, 1, 1, 0 },
        { 0, 0, 1, 0 },
        { 0, 0, 1, 0 }
    }
};

int menu();
int gameOver();
void title();
void gameLoop();
void display();
bool makeBlocks();
void initGame();
void moveBlock(int, int);
void collidable();
bool isCollide(int, int);
void userInput();
bool rotateBolck();
void spwanBlock();

int main()
{
    switch (menu())
    {
    case 1:
        gameLoop();
        break;
    case 2:
        return 0;
    case 0:
        std::cerr << "Choose 1~2" << std::endl;
        return -1;
    }
    return 0;
}

int gameOver()
{
    using namespace std;

    char a;
    cout << " #####     #    #     # ####### ####### #     # ####### ######\n" ;
    cout << "#     #   # #   ##   ## #       #     # #     # #       #     #\n";
    cout << "#        #   #  # # # # #       #     # #     # #       #     #\n";
    cout << "#  #### #     # #  #  # #####   #     # #     # #####   ######\n";
    cout << "#     # ####### #     # #       #     #  #   #  #       #   #\n";
    cout << "#     # #     # #     # #       #     #   # #   #       #    #\n";
    cout << " #####  #     # #     # ####### #######    #    ####### #     #\n";
    cout << "\n\nPress any key and enter\n";
    cin >> a;
    return 0;
}

void gameLoop()
{
    int time = 0;
    initGame();

    while (!gameover)
    {
        if (kbhit())
        {
            userInput();
        }

        if (time < GAMESPEED)
        {
            time++;
        }
        else
        {
            spwanBlock();
            time = 0;
        }
    }

}

int menu()
{
    title();

    int select_num = 0;

    std::cin >> select_num;

    switch (select_num)
    {
    case 1:
    case 2:
    case 3:
        break;
    default:
        select_num = 0;
        break;
    }

    return select_num;
}

void title()
{
    using namespace std;

    system("cls");

    cout << "#==============================================================================#\n";

    cout << "####### ####### ####### ######    ###    #####\n";
    cout << "   #    #          #    #     #    #    #     #\n";
    cout << "   #    #          #    #     #    #    #\n";
    cout << "   #    #####      #    ######     #     #####\n";
    cout << "   #    #          #    #   #      #          #\n";
    cout << "   #    #          #    #    #     #    #     #\n";
    cout << "   #    #######    #    #     #   ###    #####\t\tmade for fun \n";
    cout << "\n\n\n\n";

    cout << "\t<Menu>\n";
    cout << "\t1: Start Game\n\t2: Quit\n\n";

    cout << "#==============================================================================#\n";
    cout << "Choose >> ";
}

void display()
{
    system("cls");

    for (int i = 0; i < 21; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            switch (field[i][j])
            {
            case 0:
                std::cout << " " << std::flush;
                break;
            case 9:
                std::cout << "@" << std::flush;
                break;
            default:
                std::cout << "#" << std::flush;
                break;
            }
        }
        std::cout << std::endl;
    }

    std::cout << "\n\tA: left\tS: down\tD: right \t Rotation[Space]";

    if (gameover)
    {
        system("cls");
        gameOver();
    }
}

void initGame()
{
    for (int i = 0; i <= 20; i++)
    {
        for (int j = 0; j <= 11; j++)
        {
            if ((j == 0) || (j == 11) || (i == 20))
            {
                field[i][j] = stage[i][j] = 9;
            }
            else
            {
                field[i][j] = stage[i][j] = 0;
            }
        }
    }

    makeBlocks();

    display();
}

bool makeBlocks()
{
    x = 4;
    y = 0;

    int blockType = rand() % 5 + 1;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            block[i][j] = 0;
            block[i][j] = block_list[blockType][i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            field[i][j + 4] = stage[i][j + 4] + block[i][j];

            if (field[i][j + 4] > 1)
            {
                gameover = true;
                return true;
            }
        }
    }
    return false;
}

void moveBlock(int x2, int y2)
{

    //Remove block
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            field[y + i][x + j] -= block[i][j];
        }
    }
    //Update coordinates
    x = x2;
    y = y2;

    // assign a block with the updated value
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            field[y + i][x + j] += block[i][j];
        }
    }

    display();
}

void collidable()
{
    for (int i = 0; i<21; i++)
    {
        for (int j = 0; j<12; j++)
        {
            stage[i][j] = field[i][j];
        }
    }
}

bool isCollide(int x2, int y2)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (block[i][j] && stage[y2 + i][x2 + j] != 0)
            {
                return true;
            }
        }
    }
    return false;
}

void userInput()
{
    char key;

    key = getch();

    switch (key)
    {
    case 'd':
        if (!isCollide(x + 1, y))
        {
            moveBlock(x + 1, y);
        }
        break;
    case 'a':
        if (!isCollide(x - 1, y))
        {
            moveBlock(x - 1, y);
        }
        break;
    case 's':
        if (!isCollide(x, y + 1))
        {
            moveBlock(x, y + 1);
        }
        break;
    case ' '://tecla espacio
        rotateBolck();
    }
}

bool rotateBolck()
{
    std::vector<std::vector<int>> tmp(4, std::vector<int>(4, 0));

    for (int i = 0; i < 4; i++)
    { //Save temporarily block
        for (int j = 0; j < 4; j++)
        {
            tmp[i][j] = block[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    { //Rotate
        for (int j = 0; j < 4; j++)
        {
            block[i][j] = tmp[3 - j][i];
        }
    }

    if (isCollide(x, y))
    { // And stop if it overlaps not be rotated
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                block[i][j] = tmp[i][j];
            }
        }
        return true;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            field[y + i][x + j] -= tmp[i][j];
            field[y + i][x + j] += block[i][j];
        }
    }

    display();

    return false;
}

void spwanBlock()
{
    if (!isCollide(x, y + 1))
    {
        moveBlock(x, y + 1);
    }
    else
    {
        collidable();
        makeBlocks();
        display();
    }
}

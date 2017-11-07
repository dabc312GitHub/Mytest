//Dark GDK - The Game Creators - www.thegamecreators.com

//the wizard has created a very simple project that uses Dark GDK
//it contains the basic code for a GDK application

//whenever using Dark GDK you must ensure you include the header file
#include "DarkGDK.h"


//Global
int Block_Size=20;
const DWORD Red = dbRGB(255,0,0);
const DWORD Green = dbRGB(0,255,0);
const DWORD Blue = dbRGB(0,0,255);
const DWORD Magenta = dbRGB(255,0,255);
const DWORD Black = dbRGB(0,0,0);
const DWORD White = dbRGB(255,255,255);
const DWORD Yellow = dbRGB(255,255,0);
const DWORD Cyan = dbRGB(0,255,255);
const DWORD Orange = dbRGB(255,165,0);
//end global

//Classes

class Block {
private:
    int x,y;
    DWORD color;
public:
    Block();
    Block(int, int, DWORD);
    void draw();
    void move(int, int);
  void clear();

};
Block::Block(){
x = 0;
y =0;
color = White;
}
//Methods (Block)

Block::Block(int X, int Y, DWORD COLOR)
{
    x=X;
    y=Y;
    color=COLOR;
}

void Block::draw()
{
    int x1, y1, x2, y2;
    x1=x*Block_Size;
    y1=y*Block_Size;
    x2=x1+Block_Size;
    y2=y1+Block_Size;

//	dbInk(color, Black);
    dbBox(x1,y1,x2,y2);
}

void Block::clear()
{

    dbInk(Black, Black);
    //dbBox(x1,y1,x2,y2);
    draw();
}

void Block::move(int dx, int dy)
{
    x=x+dx;
    y=y+dy;
    dbInk(color, Black);
    draw();
}
//End Method (Block)

class Shape {

private:
    Block blocks[4];
    //int pos[8];
public:
    int pos[8];
    DWORD color;
    Shape();
    void make_shape();
    void move_shape(int,int);
    void draw_shape();
};
//Methods (Shape)
Shape::Shape() {
blocks[0] = Block(0,0, Red);
blocks[1] = Block(0,0, Red);
blocks[2] = Block(0,0, Red);
blocks[3] = Block(0,0, Red);
}
void Shape::make_shape()
{
    blocks[0] = Block(pos[0],pos[1],color);
    blocks[1] = Block(pos[2],pos[3],color);
    blocks[2] = Block(pos[4],pos[5],color);
    blocks[3] = Block(pos[6],pos[7],color);

}

void Shape::draw_shape()
{
    for (int i=0; i<4; i++)
    {
        blocks[i].draw();
    }
}

void Shape::move_shape(int dx, int dy)
{
    for (int i=0; i<4; i++)
    {
        blocks[i].clear();
    }
    for (int i=0; i<4; i++)
    {
        blocks[i].move(dx,dy);
    }
}


class I_Shape: public Shape{
public:
    I_Shape(int,int);

private:
    DWORD color;
    //int pos[8];
};

//Methods (I_Shape)


I_Shape::I_Shape(int x, int y):Shape()
{
//make_shape(pos[8],color);
    color=Blue;
    pos[0]=x-1;
    pos[1]=y;
    pos[2]=x;
    pos[3]=y;
    pos[4]=x+1;
    pos[5]=y;
    pos[6]=x+2;
    pos[7]=y;
    make_shape();
}

// the main entry point for the application is this function
void DarkGDK ( void )
{
    //Block NewBlock(0,0,Red);
    I_Shape First(5,3);
    // turn on sync rate and set maximum rate to 1 fps
    dbSyncOn   ( );
    dbSyncRate ( 1 );
    First.draw_shape();
    First.move_shape(5,0);

    //NewBlock.draw();
    //	NewBlock.move(2,2);
    // our main loop
    while ( LoopGDK ( ) )
    {


            First.move_shape(0,1);




        // update the screen
        dbSync ( );
    }

    // return back to windows
    return;
}

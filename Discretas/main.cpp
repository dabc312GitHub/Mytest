#include<iostream>
using namespace std;

class Cell
{
    public Point Position { get; private set; }
    public Rectangle Bounds { get; private set; }

    public bool IsAlive { get; set; }

    public Cell(Point position)
    {
        Position = position;
        Bounds = new Rectangle(Position.X * Game1.CellSize, Position.Y * Game1.CellSize, Game1.CellSize, Game1.CellSize);

        IsAlive = false;
    }

    public void Update(MouseState mouseState)
    {
        if (Bounds.Contains(new Point(mouseState.X, mouseState.Y)))
        {
            // Make cells come alive with left-click, or kill them with right-click.
            if (mouseState.LeftButton == ButtonState.Pressed)
                IsAlive = true;
            else if (mouseState.RightButton == ButtonState.Pressed)
                IsAlive = false;
        }
    }

    public void Draw(SpriteBatch spriteBatch)
    {
        if (IsAlive)
            spriteBatch.Draw(Game1.Pixel, Bounds, Color.Black);

        // Don't draw anything if it's dead, since the default background color is white.
    }
}

class Grid
{
    public Point Size { get; private set; }

    private Cell[,] cells;

    public Grid()
    {
        Size = new Point(Game1.CellsX, Game1.CellsY);

        cells = new Cell[Size.X, Size.Y];

        for (int i = 0; i < Size.X; i++)
            for (int j = 0; j < Size.Y; j++)
                cells[i, j] = new Cell(new Point(i, j));
    }

    public void Update(GameTime gameTime)
    {
        (...)

        // Loop through every cell on the grid.
        for (int i = 0; i < Size.X; i++)
        {
            for (int j = 0; j < Size.Y; j++)
            {
                // Check the cell's current state, and count its living neighbors.
                bool living = cells[i, j].IsAlive;
                int count = GetLivingNeighbors(i, j);
                bool result = false;

                // Apply the rules and set the next state.
                if (living && count < 2)
                    result = false;
                if (living && (count == 2 || count == 3))
                    result = true;
                if (living && count > 3)
                    result = false;
                if (!living && count == 3)
                    result = true;

                cells[i, j].IsAlive = result;
            }
        }
    }

    (...)

}

public int GetLivingNeighbors(int x, int y)
{
    int count = 0;

    // Check cell on the right.
    if (x != Size.X - 1)
        if (cells[x + 1, y].IsAlive)
            count++;

    // Check cell on the bottom right.
    if (x != Size.X - 1 && y != Size.Y - 1)
        if (cells[x + 1, y + 1].IsAlive)
            count++;

    // Check cell on the bottom.
    if (y != Size.Y - 1)
        if (cells[x, y + 1].IsAlive)
            count++;

    // Check cell on the bottom left.
    if (x != 0 && y != Size.Y - 1)
        if (cells[x - 1, y + 1].IsAlive)
            count++;

    // Check cell on the left.
    if (x != 0)
        if (cells[x - 1, y].IsAlive)
            count++;

    // Check cell on the top left.
    if (x != 0 && y != 0)
        if (cells[x - 1, y - 1].IsAlive)
            count++;

    // Check cell on the top.
    if (y != 0)
        if (cells[x, y - 1].IsAlive)
            count++;

    // Check cell on the top right.
    if (x != Size.X - 1 && y != 0)
        if (cells[x + 1, y - 1].IsAlive)
            count++;

    return count;
}

public void SetNextState()
{
    for (int i = 0; i < Size.X; i++)
        for (int j = 0; j < Size.Y; j++)
            cells[i, j].IsAlive = nextCellStates[i, j];
}

public void Draw(SpriteBatch spriteBatch)
{
    foreach (Cell cell in cells)
        cell.Draw(spriteBatch);

    // Draw vertical gridlines.
    for (int i = 0; i < Size.X; i++)
        spriteBatch.Draw(Game1.Pixel, new Rectangle(i * Game1.CellSize - 1, 0, 1, Size.Y * Game1.CellSize), Color.DarkGray);

    // Draw horizontal gridlines.
    for (int j = 0; j < Size.Y; j++)
        spriteBatch.Draw(Game1.Pixel, new Rectangle(0, j * Game1.CellSize - 1, Size.X * Game1.CellSize, 1), Color.DarkGray);
}

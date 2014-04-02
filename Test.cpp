#include <iostream>

using namespace std;

int matrix[5][4] =
    {
        {1,  2,  3,  4},
        {14, 15, 16, 5},
        {13, 20, 17, 6},
        {12, 19, 18, 7},
        {11, 10,  9, 8}
    };

class SpiralPrinter
{
public:

    SpiralPrinter()
    {
        m = 5;
        n = 4;

        startRow = 0;
        endRow = m;
        startCol = 0;
        endCol = n;
    }

    void Print()
    {
        while ((startRow <= endRow) && (startCol <= endCol))
        {
            goRight();
            if (startRow > endRow)
                break;
            
            goDown();
            
            goLeft();
            if(startRow < endRow)
                break;
            
            goUp();
            if(startCol > endCol)
                break;
        }
    }
private:

    void goRight()
    {
        int i;
        for (i = startCol; i < endCol; ++i)
        {
            cout << matrix[startRow][i] << endl;
        }

        startRow++;
        endRow = m - startRow;
		startCol = endCol;
    }

    void goDown()
    {
        int i;
        for (i = startRow; i < endRow; ++i)
        {
            cout << matrix[i][startCol - 1] << endl;
        }

        endCol = n - startCol;
		startCol--;
		startRow = endRow;
    }

    void goLeft()
    {
        int i;
        for (i = startCol; i >= endCol; --i)
        {
            cout << matrix[startRow][i] << endl;
        }

        endRow = m - startRow;
		startRow--;
		startCol = endCol;
    }

    void goUp()
    {
        int i;
        for (i = startRow; i >= endRow; --i)
        {
            cout << matrix[i][startCol] << endl;
        }

        startCol++;
		endCol = n - startCol;
		startRow = endRow;
    }

    int m;
    int n;

    int startRow;
    int endRow;
    int startCol;
    int endCol;

};
int main()
{
    cout << "Hello World";

    SpiralPrinter printer;
    printer.Print();

    return 0;
}

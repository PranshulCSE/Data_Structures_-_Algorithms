// program to print Butterfly
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *


#include <iostream>
                                                 using namespace std;
int main()
{
    int row, col;
    for (row = 1; row <=5; row++) //n=5
    {

        for (col = 1; col <= row; col++)
            cout << " *";

        for (col = 1; col <= 10-(2*row); col++) // 10= 2*n
            cout << "  ";
        for (col = 1; col <= row; col++)
            cout << " *";
        cout << endl;
    }
    for (row = 4; row >= 1; row--)
    {

        for (col = 1; col <= row; col++)
            cout << " *";

        for (col = 1; col <= 10 - (2 * row); col++)
            cout << "  ";
        for (col = 1; col <= row; col++)
            cout << " *";
        cout << endl;
    }
}
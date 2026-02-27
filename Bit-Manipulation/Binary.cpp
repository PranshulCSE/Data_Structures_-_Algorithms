// Program to convert Binary to Decimal
#include<iostream>
using namespace std;
int main()
{
    int n, decimal = 0, base = 1, rem;
    cout << "Enter a binary number: ";
    cin >> n;
    while (n > 0)
    {
        // 1010
        rem = n % 10;
        decimal = decimal + rem * base;
        n = n / 10 ;
        base = base * 2;
    }
    cout << "Decimal equivalent: " << decimal;
    return 0;
}
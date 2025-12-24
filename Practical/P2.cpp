// 2. CPP Program to Reverse a Number
#include <iostream>
using namespace std;
int main()
{
    int n, digit, temp = 0;
    cout << "Enter a Number: ";
    cin >> n;
    while (n > 0)
    {
        digit = n % 10;
        temp = temp * 10 + digit;
        n /= 10;
    }
    cout << "Reversed Number is: " << temp;
}
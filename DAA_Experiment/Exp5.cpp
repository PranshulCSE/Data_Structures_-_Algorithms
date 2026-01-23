// Experiment-5 Date: 22/01/2025
// Program to Find Maximum &  Minimum in Set of Integers
#include <iostream>
using namespace std;
int main()
{
    // int arr[]={52,78,96,33,14,22,66,45,25,99};
    int n;
    cout << "Enter Size of Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter Array Elements: \n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        // For Minimum Value
        if (arr[i] < min)
            min = arr[i];

        // For MAximum Value
        if (arr[i] > max)
            max = arr[i];
    }
    cout << "Minimum Element in Set of Integer is: " << min;

    cout << endl
         << "Maximum Element in Set of Integer is: " << max;
}

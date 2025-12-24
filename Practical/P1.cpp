//   1. Accept an Array from the User and Calculate the Running Sum of the Array Elements
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter Size: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " Elements : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int sum = 0;
    for (int j = 0; j < n; j++)
        sum += arr[j];
    cout << "Sum of " << n << " Element is: " << sum;
}
#include <iostream>
using namespace std;

int binary(int ar[], int first, int last, int element)
{
    if (first > last)
        return -1; // Element not found

    int mid = (first + last) / 2;

    if (ar[mid] == element)
        return mid;
    else if (element < ar[mid])
        return binary(ar, first, mid - 1, element);
    else
        return binary(ar, mid + 1, last, element);
}

int main()
{
    int ar[5], Elem;
    cout << "Enter 5 sorted Array Elements: ";
    for (int i = 0; i < 5; i++)
        cin >> ar[i];

    cout << "Enter the Element to be Searched: ";
    cin >> Elem;

    int result = binary(ar, 0, 4, Elem);

    if (result != -1)
        cout << "Element found at index: " << result+1 << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
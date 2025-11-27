#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    int n, i, j, index;
    cout << "Enter the Number of Elements: ";
    cin >> n;

    cout << "Enter " << n << " Elements :";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Elements Before Sorting is : ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "  " << endl;
    }

//    Selection-Sort Logic 


    cout << "Elements After Sorting is : ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}
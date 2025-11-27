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

    cout << "\nElements Before Sorting is : \n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }

    // Bubble Sort

    for (int i = 0; i < n - 1; i++)
    {
        // For Pass
        for (j = 1; j < n - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                // It Sorts Element in Descending order for Ascending must use  if(arr[j]<arr[j+1]) istead of  if(arr[j]>arr[j+1])
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "\nElements After Sorting is : \n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}
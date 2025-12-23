#include <iostream>
using namespace std;
int main()
{
    int arr[10], min_index;
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
    for (int i = 0; i < n - 1; i++)
    {
        min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
                min_index = j;
        }
    }
    if (min_index != i)
    {
        swap(arr[i], arr[min_index]);
    }

    cout << "Elements After Sorting is : ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}
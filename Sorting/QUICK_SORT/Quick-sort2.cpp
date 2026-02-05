#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivotElement = arr[s];

    // Count elements smaller than or equal to pivot
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivotElement)
            count++;
    }

    // Place pivot at its correct position
    int pivotIndex = s + count;
    swap(arr[s], arr[pivotIndex]);

    // Rearrange elements around pivot
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivotElement)
            i++;

        while (arr[j] > pivotElement)
            j--;

        if (i < pivotIndex && j > pivotIndex)
            swap(arr[i++], arr[j--]);
    }

    return pivotIndex;
}

void quicksort(int arr[], int s, int e)
{
    if (s >= e)
        return;

    int p = partition(arr, s, e);
    quicksort(arr, s, p - 1);
    quicksort(arr, p + 1, e);
}

int main()
{
    int n;
    cout << "Enter Size of Array: ";
    cin >> n;

    int arr[n];
    cout << "Enter Array Elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    quicksort(arr, 0, n - 1);

    cout << "\nArray after Sorting is:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

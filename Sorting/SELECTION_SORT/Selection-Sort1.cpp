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

    // Selection Sort Logic
    for (int i = 0; i < n - 1; i++) // Outer loop: marks the start of the unsorted subarray
    {
        // 1. Initialize 'minIndex' to the starting position of the unsorted subarray
        int minIndex = i;

        // 2. Inner loop: searches for the smallest element in the rest of the array (from i+1 to n-1)
        for (int j = i + 1; j < n; j++)
        {
            // 3. If an element smaller than the current minimum is found
            if (arr[j] < arr[minIndex])
            {
                // 4. Update minIndex to the position of the new smallest element
                minIndex = j;
            }
        }

        // 5. Swap the minimum element (at minIndex) with the element at the current position (i)
        //    Only swap if the minimum element is not already at the correct position
        if (minIndex != i)
        {
            swap(arr[i], arr[minIndex]);
        }
    }
    cout << "Elements After Sorting is : ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}
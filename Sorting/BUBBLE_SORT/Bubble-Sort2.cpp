#include <iostream>
using namespace std;
void bubblesort(int arr[], int size)
{
    int i, j;
    // Outer Loop is for n-1 passes
    for (i = 0; i < size ; i++)
    {
        // For Comparing Element in each pass
        for (j = 1; j < size - i; j++)
        {
            if (arr[j] < arr[j - 1])
                swap(arr[j], arr[j - 1]);
        }
    }
}
int main()
{
    int i, n;
    cout << "Enter the Number of Elements: \n";
    cin >> n;
    int ar[n];
    cout << "Enter " << n << " Elements :";
    for (i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    cout << "\nElements Before Sorting is : \n";
    for (i = 0; i < n; i++)
    {
        cout << ar[i] << "  ";
    }

    bubblesort(ar, n);

    cout << "\nElements After Sorting is : \n";
    for (i = 0; i < n; i++)
    {
        cout << ar[i] << "  ";
    }
}
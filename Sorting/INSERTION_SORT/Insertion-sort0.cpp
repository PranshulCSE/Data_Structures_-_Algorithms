#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int a[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Insertion Sorting

    // {6,2,5,8,9}

    for (int i = 1; i < n; i++)
    {
        int elem = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > elem)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = elem;
    }

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
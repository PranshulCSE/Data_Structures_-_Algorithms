#include <iostream>
using namespace std;

int main()
{
    int n, i, j, temp;
    cout << "Enter number of elements: ";
    cin >> n;
    int a[n];

    cout << "Enter " << n << " elements:\n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Bubble sort
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j <= n - i; j++) // to reduce time complexity & reducing no. off loops
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array:\n";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
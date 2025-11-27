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

    // Own Logic for Sorting

    // {6,2,5,8,9}
    for (int k = 0; k < n; k++)
        for (int j = 1; j < n; j++)
        {
            for (int i = j; i >= 0; i--)
            {
                if (a[j] < a[i])
                {
                    swap(a[j], a[i]);
                }
            }
        }

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
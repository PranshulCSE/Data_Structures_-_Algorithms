#include <iostream>
using namespace std;

int main()
{
    int size, element, flag = 0;
    cout << "Enter Size of Array: ";
    cin >> size;

    int a[size];
    cout << "\nEnter " << size << " Elements of Array in Sorted Manner: \n";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    cout << "\nEnter the Element to be Searched: ";
    cin >> element;

    int first = 0;
    int last = size - 1;
    int mid;

    while (first <= last)
    {
        mid = (first + last) / 2;

        if (a[mid] == element)
        {
            cout << "\nElement found at index: " << mid;
            flag = 1;
            break;
        }
        else if (a[mid] < element)
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }

    if (flag == 0)
    {
        cout << "\nElement not found in the Array";
    }

    return 0;
}

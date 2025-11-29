#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
int main()
{
    //  Sorting in a Vector
    vector<int> v1 = {92, 77, 91, 42, 85, 36, 77, 68, 99, 20};
    cout << "Vector in Increasing Order is: ";
    // For Increasing Order i,e Ascending Order
    sort(v1.begin(), v1.end());
    for (auto i : v1)
    {
        cout << i << "  ";
    }
    cout << "\nVector in Deccreasing Order is: ";

    // For Dereasing Order i,e Descending Order
    sort(v1.begin(), v1.end(), greater<int>());
    for (auto i : v1)
    {
        cout << i << "  ";
    }
    cout << "\nVector in Deccreasing Order is: ";

    // Another way For Dereasing Order i,e Descending Order
    sort(v1.rbegin(), v1.rend());
    for (auto i : v1)
    {
        cout << i << "  ";
    }

    // Binary Search in a Vector
    vector<int> v2 = {92, 77, 91, 42, 85, 36, 77, 68, 99, 20};
    sort(v2.begin(), v2.end());
    for (auto i : v2)
    {
        cout << i << "  ";
    }
    cout << "\nBinary Search is:" << binary_search(v2.begin(), v2.end(), 42) << endl;
    // Finding the address  of any Element in Vector
    
    auto it = find(v2.begin(), v2.end(), 91);
    if (it != v2.end())
    {
        cout << "Found element " << *it << " at index " << distance(v2.begin(), it) << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}

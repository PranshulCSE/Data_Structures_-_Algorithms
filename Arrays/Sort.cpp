#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "enter Array Elements";
    int nums[n];
    for (int i = 0; i < n; i++)
        cin >> nums[i];
        int c=0; // Current Pointer
        int zero=0; //Zeroth index
        int two=n-1;

        while (c <= two)
            {
                if (nums[c] == 0)
                {
                    swap(nums[c], nums[zero]);
                    c++;
                    zero++;
                }
                else if (nums[c] == 1)
                    c++;
                else
                {
                    swap(nums[c], nums[two]);
                    two--;
                }
            }

            cout << "Array after operations is:\n";
        for (int i = 0; i < n; i++)
            cout << nums[i] << "  ";
}


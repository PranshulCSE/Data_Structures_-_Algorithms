#include <iostream>
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
    int res[n];
    int p=0, x=1;
   
    for (int i = 0; i < n; i++)
    {
        if (nums[i] >= 0)
        {
            res[p] = nums[i];
            p += 2;
        }
        else
        {
            res[x] = nums[i];
            x += 2;
        }
    }

    for (int i = 0; i < n; i++)
        cout << res[i] << "  ";
}
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

    int mx = nums[0];
    int sum = nums[0];

    for (int i = 1; i < n; i++)
    {
        int next = nums[i];

        // finding if sum is greater
        sum = max(sum + next, next);
        mx = max(mx, sum);
    }

    cout << "Maximum Subarray Sum is: "<<mx<< endl;
}
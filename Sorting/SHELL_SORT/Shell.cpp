#include <bits/stdc++.h>
using namespace std;
// Program in CPP for Shell Sort/ Gap Insertion Sort 

int main()
{
  cout<<"Enter the number of elements in the array: ";
  int n;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

     // Shell Sort implementation
    for (int gap = n / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i++)
        {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
            {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)    {
        cout << arr[i] << " ";
    }

    return 0;
}
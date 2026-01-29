#include <bits/stdc++.h>
using namespace std;
int partition(int num[], int s, int e)
{
    int element=num[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(num[i]<=element)
            count++;
    }
    swap(num[s],num[s+count]);
}
void quicksort(int arr[], int s, int e)
{
    if (s >= e)
        return;
    int p = partition(arr, s, e);
    quicksort(arr, s, p - 1);
    quicksort(arr, p + 1, e);
}

int main()
{
    int n;
    cout << "Enter Size of Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter Array Elements: \n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << endl
         << "Array after Sorting is:" << endl;

    quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << "  ";
}
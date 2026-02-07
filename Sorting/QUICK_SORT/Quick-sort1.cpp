#include <bits/stdc++.h>
using namespace std;
int partition(int num[], int s, int e)
{
    int pivotelement=num[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(num[i]<=pivotelement)
            count++;
    }
    swap(num[s],num[s+count]);

    int pivot=s+count;
    swap(num[s],num[pivot]);

    int i=s,j=e;

    while(i<pivot && j>pivot){
        while (num[i] <= pivot)
                i++;

            while (num[j] > pivotelement)
                j--;

            if (i < pivot && j > pivot )
                swap(num[i++], num[j--]);
    }
    
    return pivot;

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

    cout << endl << "Array after Sorting is:" << endl;

    quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << "  ";
}
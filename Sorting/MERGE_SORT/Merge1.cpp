#include <bits/stdc++.h>
using namespace std;
void sort1(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int a = mid-s + 1;
    int b = e - mid;
    int *f1 = new int[a];
    int *f2 = new int[b];
    int k = s;
    for (int i = 0; i < a; i++)
        f1[i] = arr[k++];
    for (int i = 0; i < b; i++)
        f2[i] = arr[k++];
    k = s;
    int index1 = 0, index2 = 0;
    while (index1 < a && index2 < b)
    {
        if (f1[index1] < f2[index2])
            arr[k++] = f1[index1++];
        else
            arr[k++] = f2[index2++];
    }
    while (index1 < a)
        arr[k++] = f1[index1++];
    while (index2 < b)
        arr[k++] = f2[index2++];
}

void merge(int arr[],int start,int end){

        if(start>=end)
        return;

     int mid=start+(end-start)/2;
     
     
     merge(arr,start,mid);
     merge(arr,mid+1,end);
     sort1(arr,start,end);

}

  
int main()
{
    // int arr[]={52,78,96,33,14,22,66,45,25,99};
    int n;
    cout << "Enter Size of Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter Array Elements: \n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];


        //Merge Sort
    merge(arr,0,n-1);

    // Printing the Array

    cout<<endl<<"Array after Sorting is:"<<endl;

    for (int i = 0; i < n; i++)
        cout<<arr[i]<<"  ";
}
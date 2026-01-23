// Bubble Sort
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter Size of Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter Array Elements: \n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i=0;i<n;i++)
        for(int j=0;j<n-i-1;j++)
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        

        // Printing Array Elements
        cout<<"Elements After Bubble Sort is:"<<endl;
            for(int i=0;i<10;i++)
                cout<<arr[i]<<" ";
}
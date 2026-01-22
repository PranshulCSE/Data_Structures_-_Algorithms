// Bubble Sort
#include<iostream>
using namespace std;
int main(){
    int arr[]={78,25,41,63,99,44,11,25,53,8};
    int n=10;
    for(int i=0;i<n;i++)
        for(int j=0;j<n-i-1;j++)
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        

        // Printing Array Elements
        cout<<"Elements After Bubble Sort is:"<<endl;
            for(int i=0;i<10;i++)
                cout<<arr[i]<<" ";
}
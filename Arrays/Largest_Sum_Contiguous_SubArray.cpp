// Kadane's Algorithm to find the largest sum contiguous subarray
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector <int> arr(n);
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi=INT32_MIN;
    int prefix=0;
    for(int i=0;i<n;i++){
        prefix+=arr[i];
        maxi=max(maxi,prefix);
        if(prefix<0){
            prefix=0;
        }
    }
    cout<<"The largest sum contiguous subarray is: "<< maxi <<endl;
}
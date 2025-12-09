#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int subarr(vector <int> arr, int n){
    int prefix=0;
    int total=0;
    for(int i=0;i<n;i++){
        total+=arr[i];
    }
    for(int i=0;i<n-1;i++){
        prefix+=arr[i];
        int ans=total-prefix;
        if(prefix==ans){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector <int> arr(n);
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result=subarr(arr,n);
    if(result==1){
        cout<<"Yes, the array can be divided into two subarrays with equal sum."<<endl;
    }
    else{
        cout<<"No, the array cannot be divided into two subarrays with equal sum."<<endl;
    }
}
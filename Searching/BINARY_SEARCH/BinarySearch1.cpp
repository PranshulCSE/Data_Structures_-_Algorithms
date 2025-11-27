#include<iostream>
using namespace std;
int main(){
    int arr[]={10,25,44,53,66,88,99};
    int size=sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end=size-1;
    int key=88;
    int found=1;
    while(start<=end){
      int mid=(start+end)/2;
      if (arr[mid] == key)
      {
          cout << "Element found at index : " << mid ;
          found = 0;
          break;
      }
      else if(key<arr[mid])
      end=mid-1;
      else if(key>arr[mid])
      start=mid+1;
      else
      found=1;
    }
    if(found==1)
    cout<<"Element not found";
}
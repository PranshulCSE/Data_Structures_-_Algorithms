#include<iostream>
using namespace std;

int sum(int arr[],int size){
    if(size==0)
    return 0;
    return arr[size-1]+sum(arr,size-1);

}
int main(){
    int ar[]={10,11,15,78,55};
    int s=sizeof(ar)/sizeof(ar[0]);
    int f=sum(ar,s);
    cout<<"Sum is: "<<f;
}
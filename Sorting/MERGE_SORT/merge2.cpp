#include<bits/stdc++.h>
using namespace std;
void merge(int *arr[],int s,int e)
{
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *f1=new int[len1];
    int *f2=new int[len2];
    int k=s;
    for(int i=0;i<len1;i++)
    f1[i]=arr[k++];
    for(int i=0;i<len2;i++)
    f2[i]=arr[k++];
    
    int i=0,j=0;
    k=s;
    while(i<len1 && j<len2)
    {
        if(f1[i]<f2[j])
        arr[k++]=f1[i++];
        else
        arr[k++]=f2[j++];
    }
    while(i<len1)
    arr[k++]=f1[i++];
    while(j<len2)
    arr[k++]=f2[j++];
}
void mergeSort(int *arr,int s,int e)
{
    if(s>=e) return;
    int mid=(s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) 
    cin>>arr[i];
    mergeSort(arr,0,n-1);
    for(auto x:arr)
    cout<<x<<" "<<endl;
}
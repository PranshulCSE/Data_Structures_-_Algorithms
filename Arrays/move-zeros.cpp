#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"enter Array Elements";
    int nums[n];
    for(int i=0;i<n;i++)
        cin>>nums[i];
    
        int start=0;
        int end=n-1;
        while(start<=end){
            if(nums[start]!=0)
            {
                start++;
            }
            else if(nums[start]==0 && nums[end]!=0){
                swap(nums[start],nums[end]);
                start++;
                end--;
            }
            else if(nums[end]==0)
            end--;
        }

        cout<<"Array after operations is:\n";
        for(int i=n;i>0;i--)
        cout<<nums[i]<<"  ";
        
        

    }
















































































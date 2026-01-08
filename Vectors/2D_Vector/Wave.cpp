#include<iostream>
#include<vector>
using namespace std;
void printwave(vector<vector<int>> &arr, int n, int m) {
    for(int j=0;j<m;j++){
        if(j%2==0){
            // Printing Array in Top tp Bottom Manner
            for(int i=0;i<n;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else
        {
            // Printing Array In Bottom Up Manner
            for(int i=n-1;i>=0;i--){
                cout << arr[i][j] << " ";
            }
        }
    }
}
int main(){
    int n,m;
    cout<<"Enter number of rows and columns: ";
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    cout<<" Enter Array Elements  "<<endl;  
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Wave Print of the Array is: "<<endl;
    printwave(arr,n,m);
}
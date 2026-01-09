// Finding Missing and Repeating Numbers in an Array
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr = {4, 3, 6, 2, 1, 1};
    int n = arr.size();
    vector<int> count(n,0);
    for(int i=0;i<n;i++){
        count[arr[i]-1]++;
    }
    // Missing
    for (int i = 0; i < n; i++)
    {
        if(count[i]==0){
            cout<<"Missing Number: "<<i+1<<endl;
            break;
        }
    }
    // Repeating
    for (int i = 0; i < n; i++)
    {
        if(count[i]>1){
            cout<<"Repeating Number: "<<i+1<<endl;
            break;
        }
    }
}
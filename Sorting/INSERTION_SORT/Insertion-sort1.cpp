#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout << "Enter number of elements: ";
    cin >> n;
    int a[n];

    cout << "Enter " << n << " elements:\n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    //   7|4|2|3|5
    // Insertion sort
    for(i=1;i<n;i++)
    for(int j=i;j>0;j--)
    {
        if(a[j]<a[j-1])
        {
            swap(a[j],a[j-1]);
        }
        else
        break;
    }
   
    cout << "Sorted array:\n";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int size,element,flag=0;
    cout << "Enter Size of Array: ";
    cin >> size;
    int a[size];
    cout << "\nEnter " << size << " Elements of Array: \n";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "\n Enter the Element to be Searched: ";
    cin>>element;
    for(int i=0;i<size;i++)
    {
        if(a[i]==element)
        {
            flag=1;
            cout<<"\n Element found at index: "<<i+1;
            break;
        }
    }
    if(flag==0)
    {
        cout <<"\n Element not found in  Array";
    }
}
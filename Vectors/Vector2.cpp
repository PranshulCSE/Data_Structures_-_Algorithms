#include<iostream>
#include<vector>
using namespace std;
int main(){
    // How to remove Value From Vector


    // 1) Removing Last Element 
    vector<int> v={11,12,13,14,15,16,22};
    v.pop_back();
    cout << "Vector V (after Deleting an Element form the list): ";
    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;

    // 2) Removing All Elements
    vector<int> v1 = {11, 12, 13, 14, 15, 16, 22};
    v1.clear();
    cout << "Vector V (after Deleting all Elements form the list): ";
    for (int val : v1)
    {
        cout << val << " ";
    }
    cout << endl;

    // 3) Deleting Element from a particular Location
    vector<int> v2 = {11, 12, 13, 14, 15, 16, 22};
    // Suppose we want to Delete Element from Index 3 i.e 14 then we have to follow the following Command
    // vector_name.erase(vector_name.begin()+index);

    v2.erase(v2.begin()+3);
    cout << "Vector V (after Deleting an Element form the list): ";
    for (int val : v2)
    {
        cout << val << " ";
    }
    cout << endl;
    
}
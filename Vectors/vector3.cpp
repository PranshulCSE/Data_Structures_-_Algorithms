#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Understanding the concept of size & capacity of vectors
    vector<int> v;
    v.push_back(11); //(Size=1,Capacity=1)
    v.push_back(12); //(Size=2,Capacity=2)
    v.push_back(13); //(Size=3,Capacity=4)
    v.push_back(14); //(Size=4,Capacity=4)
    v.push_back(15); //(Size=5,Capacity=8)
    // Popping Elements out..
    v.pop_back(); //(Size=4,Capacity=8)
    v.pop_back(); //(Size=3,Capacity=8)

    // Understanding the Core Concept of Front & Back
    vector<int> v1;
    v1 = {11, 12, 13, 14, 15, 16, 17};
    // 1) front (it returns the front-most Element)
    cout << v1.front() << endl;

    // 2)back (it returns the last-most Element)
    cout << v1.back() << endl;

    // Understanding the Core Concept of Empty 

    // 3) Empty
    if (v1.empty()) // empty returns 1 if it is empty otherwise zero (0)
        cout << "Vecor is Empty";
    else
        cout << "Vector is not Empty..";
    

}
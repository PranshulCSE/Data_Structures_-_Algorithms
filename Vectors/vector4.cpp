#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //  Iterator in a Vector
    vector<int> v1;
    v1 = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    // 1)  Using .begin & .End
    // Basically .begin & .end stores the reference of first & last location

    for (auto i = v1.begin(); i != v1.end(); i++)
        cout << *i << "  ";

    cout << "\nUsing Reverse Begin & Reverse End" << endl;

    //  2) using rbegin & rend
    for (auto i = v1.rbegin(); i != v1.rend(); i++)
        cout << *i << "  ";

    cout << "\nUsing For Loop Concept" << endl;

    // 3) Using for Loop
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << "  ";

    
}
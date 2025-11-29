#include <iostream>
#include <vector>
#include <algorithm> // Not strictly necessary for this code, but useful for vectors

using namespace std;

int main()
{
    // --- 1. Creating a Vector with (Size) ---
    // Creates a vector of size 4, elements are default-initialized (usually 0 for int)
    vector<int> v(4);
    cout << "Vector v (size 4, default initialized): ";
    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;

    // --- 2. Creating a Vector with (Size, Initialisation) ---
    // Creates a vector of size 4, all elements initialized to 1
    vector<int> v2(4, 1);
    cout << "Vector v2 (size 4, initialized to 1): ";
    for (int val : v2)
    {
        cout << val << " ";
    }
    cout << endl;

    // --- 3. How to push Values in Vectors ---
    // Adds elements to the end of the vector v, increasing its size dynamically
    v.push_back(4);
    v.push_back(8);
    v.push_back(12);
    v.push_back(16);
    cout << "Vector v after push_back: ";
    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;

    // --- 4. How to Assign Values in Vectors (Initializer List) ---
    // Creates and initializes the vector with the given list of values
    vector<int> v3 = {12, 14, 15, 16, 14, 18};
    cout << "Vector v3 (from initializer list): ";
    for (int val : v3)
    {
        cout << val << " ";
    }
    cout << endl;

    // --- 5. How to take input from user in Vectors (Fixed Size) ---
    // Creates a vector of fixed size 5 and takes input for each element
    vector<int> v4(5);
    cout << "\nEnter 5 integer values for vector v4:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> v4[i];
    }
    cout << "Vector v4 contents: ";
    for (int val : v4)
    {
        cout << val << " ";
    }
    cout << endl;

    // --- 6. How to Ask from user to Create a vector (User-Defined Size) ---
    // The corrected way to ask the user for the vector size 'n'
    int n;
    cout << "\nEnter the desired size for vector v5:\n";
    cin >> n;

    // Create the vector with the user-specified size 'n'
    vector<int> v5(n);

    cout << "Enter " << n << " integer values for vector v5:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> v5[i];
    }
    cout << "Vector v5 contents: ";
    for (int val : v5)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
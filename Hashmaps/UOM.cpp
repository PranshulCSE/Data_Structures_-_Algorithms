// Program to show how to use unordered_map in C++
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    // Declaration
    unordered_map<string, int> umap;

    // 1. Insert elements
    umap["apple"] = 5;
    umap["banana"] = 3;
    umap["orange"] = 7;
    umap.insert({"grape", 4});

    // 2. Access elements
    cout << "apple: " << umap["apple"] << endl;
    cout << "banana: " << umap.at("banana") << endl;

    // 3. Check if key exists
    if (umap.count("orange"))
    {
        cout << "orange found!" << endl;
    }

    // 4. Find element
    auto it = umap.find("grape");
    if (it != umap.end())
    {
        cout << "grape: " << it->second << endl;
    }

    // 5. Iterate through map
    cout << "\nAll elements:" << endl;
    for (auto &pair : umap)
    {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // 6. Size and empty
    cout << "Size: " << umap.size() << endl;
    cout << "Empty: " << (umap.empty() ? "Yes" : "No") << endl;

    // 7. Erase elements
    umap.erase("banana");
    cout << "After erasing banana: " << umap.size() << endl;

    // 8. Clear all elements
    umap.clear();
    cout << "After clear: " << (umap.empty() ? "Empty" : "Not empty") << endl;

    return 0;
}
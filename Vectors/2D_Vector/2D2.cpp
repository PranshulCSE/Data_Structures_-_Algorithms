// 2d vector sum in c++
#include <iostream> 
#include <vector>
using namespace std;
int main() {
    // Creating a 2D vector (vector of vectors)
    vector<vector<int>> matrix;

    // Adding rows to the 2D vector
    matrix.push_back({1, 2, 3});
    matrix.push_back({4, 5, 6});
    matrix.push_back({7, 8, 9});

    int sum = 0;

    // Calculating the sum of all elements in the 2D vector
    for (size_t i = 0; i < matrix.size(); i++) {
        for (size_t j = 0; j < matrix[i].size(); j++) {
            sum += matrix[i][j];
        }
    }

    // Printing the sum
    cout << "Sum of all elements in the 2D vector: " << sum << endl;

    return 0;
}
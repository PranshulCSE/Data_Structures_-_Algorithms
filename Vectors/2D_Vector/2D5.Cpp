// Multiplication of Matrix by 2D vector in C++
#include <iostream>
#include <vector>
using namespace std;
int main() {
    // Creating a 2D vector (matrix)
    vector<vector<int>> matrix;
    // Creating a 1D vector
    vector<int> vec;

    // Adding rows to the 2D vector (matrix)
    matrix.push_back({1, 2, 3});
    matrix.push_back({4, 5, 6});
    matrix.push_back({7, 8, 9});

    // Adding elements to the 1D vector
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    // Creating a result vector to store the product
    vector<int> result(matrix.size(), 0);

    // Calculating the multiplication of the matrix by the vector
    for (size_t i = 0; i < matrix.size(); i++) {
        for (size_t j = 0; j < matrix[i].size(); j++) {
            result[i] += matrix[i][j] * vec[j];
        }
    }

    // Printing the resulting product vector
    cout << "Result of multiplying the matrix by the vector:" << endl;
    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
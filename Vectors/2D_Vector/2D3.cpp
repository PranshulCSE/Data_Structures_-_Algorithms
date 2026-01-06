// sum of two 2d vectors in c++
#include <iostream>
#include <vector>
using namespace std;
int main() {
    // Creating two 2D vectors (vector of vectors)
    vector<vector<int>> matrix1;
    vector<vector<int>> matrix2;

    // Adding rows to the first 2D vector
    matrix1.push_back({1, 2, 3});
    matrix1.push_back({4, 5, 6});
    matrix1.push_back({7, 8, 9});

    // Adding rows to the second 2D vector
    matrix2.push_back({9, 8, 7});
    matrix2.push_back({6, 5, 4});
    matrix2.push_back({3, 2, 1});

    // Creating a result 2D vector to store the sum
    vector<vector<int>> result(3, vector<int>(3, 0));

    // Calculating the sum of the two 2D vectors
    for (size_t i = 0; i < matrix1.size(); i++) {
        for (size_t j = 0; j < matrix1[i].size(); j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Printing the resulting sum 2D vector
    cout << "Sum of the two 2D vectors:" << endl;
    for (size_t i = 0; i < result.size(); i++) {
        for (size_t j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
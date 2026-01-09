// Program to Rotate a 2d vector of n*n size k times in clockwise direction
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void rotateMatrix(vector<vector<int>>& matrix, int k) {
    int n = matrix.size();
    k = k % 4; // Since rotating 4 times results in the same matrix

    for (int r = 0; r < k; r++) {
        // Transpose the matrix
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        // Reverse each row
        for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
}
int main() {
    int n, k;
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;
    cout << "Enter the number of rotations (k): ";
    cin >> k;

    vector<vector<int>> matrix(n, vector<int>(n));
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    rotateMatrix(matrix, k);

    cout << "Rotated Matrix:\n";
   for( int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
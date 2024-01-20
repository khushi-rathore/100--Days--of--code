#include <iostream>

using namespace std;

bool hasPairWithSum(int arr[][100], int rows, int cols, int targetSum) {
    int seenValues[10000] = {0};  // Assuming maximum element value is 9999

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int complement = targetSum - arr[i][j];
            if (seenValues[complement]) {
                cout << arr[i][j] << " " << complement << endl;
                return true;
            }
            seenValues[arr[i][j]] = 1;
        }
    }

    return false;
}

int main() {
    int rows, cols, targetSum;
    cin >> rows >> cols >> targetSum;

    int matrix[100][100];  // Assuming maximum dimensions of 100x100
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    if (hasPairWithSum(matrix, rows, cols, targetSum)) {
        // Pair found
    } else {
        cout << -1 << endl;  // No pair found
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

vector<int> product(int arr[], int n) {
    vector<int> left(n, 1);
    vector<int> right(n, 1);

    for (int i = 1; i < n; i++) {
        left[i] = left[i - 1] * arr[i - 1];
    }

    for (int i = n - 2; i >= 0; i--) {
        right[i] = right[i + 1] * arr[i + 1];
    }

    vector<int> ans(n, 0);
    for (int i = 0; i < n; i++) {
        ans[i] = left[i] * right[i];
    }

    return ans;
}

int main() {
    int arr[100] = {2, 1, 3, 4};
    int n = 4;

    vector<int> result = product(arr, n);

    // Print the result
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}

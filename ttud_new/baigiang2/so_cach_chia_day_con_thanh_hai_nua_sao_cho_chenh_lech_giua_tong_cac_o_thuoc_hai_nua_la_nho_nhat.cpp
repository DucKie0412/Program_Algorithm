#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int minDifference(vector<int>& A, int p, int q) {
    int n = q - p + 1;
    vector<int> prefixSum(n + 1, 0);

    for (int i = 1; i <= n; ++i) {
        prefixSum[i] = prefixSum[i - 1] + A[p + i - 2];
    }

    int totalSum = prefixSum[n];
    int minDiff = INT_MAX;

    for (int i = 1; i < n; ++i) {
        int sum1 = prefixSum[i];
        int sum2 = totalSum - sum1;
        minDiff = min(minDiff, abs(sum1 - sum2));
    }

    return minDiff;
}

int main() {
    int n, p, q;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> A(n); // Initialize the vector with size n

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> A[i]; // Directly assign values to the vector
    }

    cout << "Enter the value of p: ";
    cin >> p;

    cout << "Enter the value of q: ";
    cin >> q;

    int result = minDifference(A, p, q);
    cout << "The minimal difference is: " << result << endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int minDifference(std::vector<int>& A, int k) {
    if (k == 1) return 0;
    std::sort(A.begin(), A.end());
    int min_diff = INT_MAX;
    for (int i = 0; i <= A.size() - k; ++i) {
        int diff = A[i + k - 1] - A[i];
        if (diff < min_diff) {
            min_diff = diff;
        }
    }
    return min_diff;
}

int main() {
    int n, k;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    std::vector<int> A(n);
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> A[i];
    }

    std::cout << "Enter the value of k: ";
    std::cin >> k;

    int result = minDifference(A, k);
    std::cout << "The minimal difference is: " << result << std::endl;

    return 0;
}
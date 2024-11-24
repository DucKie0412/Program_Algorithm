#include <iostream>
#include <vector>
#include <algorithm>

int countPairsWithProductGreaterThanM(const std::vector<int>& A, int m) {
    int count = 0;
    int n = A.size();
    
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (A[i] * A[j] > m) {
                ++count;
            }
        }
    }
    
    return count;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> A(n);
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> A[i];
    }

    int m;
    std::cout<< "Enter the value of m: ";
    std::cin >> m;
    
    int result = countPairsWithProductGreaterThanM(A, m);
    std::cout << "Number of pairs with product greater than " << m << " is: " << result << std::endl;
    
    return 0;
}
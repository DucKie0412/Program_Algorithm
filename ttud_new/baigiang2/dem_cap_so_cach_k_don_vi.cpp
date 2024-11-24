#include <iostream>
#include <algorithm>
using namespace std;

int countPairsWithDifferenceK(int a[], int n, int k) {
    sort(a, a + n); // Sort the array
    int count = 0;
    int i = 0, j = 1;

    while (j < n) {
        int diff = a[j] - a[i];
        if (diff == k) {
            count++;
            i++;
            j++;
        } else if (diff < k) {
            j++;
        } else {
            i++;
        }
        if (i == j) {
            j++;
        }
    }

    return count;
}

int main() {
    int n, k;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    cout << "Enter the value of k: ";
    cin >> k;

    int result = countPairsWithDifferenceK(a, n, k);
    cout << "The number of pairs with difference " << k << " is: " << result << endl;

    return 0;
}
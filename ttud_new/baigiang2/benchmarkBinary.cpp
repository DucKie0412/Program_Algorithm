#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
using namespace std;

void generateRandomArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        arr[i] = rand() % 1000; // random elements
    }
}

void sortArray(int arr[], int n)
{
    sort(arr, arr + n); // sort elements
}

int binary_search1(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binary_search1(arr, l, mid - 1, x);
        return binary_search1(arr, mid + 1, r, x);
    }
    return -1;
}

int binary_search2(int arr[], int l, int r, int x)
{
    if (r < 1)
    {
        return -1;
    }
    int mid = l + (r - 1) / 2;
    if (arr[mid] == x)
    {
        return mid;
    }
    if (arr[mid] > x)
    {
        return binary_search2(arr, l, mid - 1, x);
    }
    return binary_search2(arr, mid + 1, r, x);
}

int interpolation_search(int a[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (x - a[l]) * ((r - l) / (a[r] - a[l]));
        if (a[m] == x)
            return m;
        if (a[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}
int main()
{
    int n, x;
    cout << "\nEnter the number of elements: ";
    cin >> n;
    int arr[n];
    generateRandomArray(arr, n);
    sortArray(arr, n);
    cout << "\nSorted array: ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << endl;

    cout << "Enter the number you want to find: ";
    cin >> x;

    clock_t start, end, start1, end1, start2, end2;

    start = clock();
    int rs = binary_search1(arr, 0, n - 1, x);
    cout << "Found!! Position in array: " << "a[" << rs << "]" << endl;
    end = clock();
    double time_taken1 = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by binary_search1: " << fixed << time_taken1 << setprecision(5) << endl;

    start1 = clock();
    int rs1 = binary_search1(arr, 0, n - 1, x);
    cout << "Found!! Position in array: " << "a[" << rs1 << "]" << endl;
    end1 = clock();
    double time_taken2 = double(end1 - start1) / double(CLOCKS_PER_SEC);
    cout << "Time taken by binary_search2: " << fixed << time_taken2 << setprecision(5)<< endl;

    start2 = clock();
    int rs2 = interpolation_search(arr, 0, n - 1, x);
    cout << "Found!! Position in array: " << "a[" << rs2 << "]" << endl;
    end2 = clock();
    double time_taken3 = double(end2 - start2) / double(CLOCKS_PER_SEC);
    cout << "Time taken by interpolation_search: " << fixed << time_taken3 << setprecision(5) <<endl;

    return 0;
}

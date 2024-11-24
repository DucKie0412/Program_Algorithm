#include <bits/stdc++.h>
using namespace std;

void nhap(int a[], int n) {
    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void xuat(int a[], int n, int k) {
    sort(a, a + n); // sap xep mang
    cout << "Day so sau khi sap xep: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Phan tu nho thu K: " << a[k - 1] << endl; // phan tu nho thu K (lon thu k thi se la a[n - k])
}

int main() {
    int n, k;
    cout << "Nhap vao so phan tu cua mang: "<<endl;
    cin >> n;
    int a[n];
    nhap(a, n);

    cout << "Nhap vao vi tri K: ";
    cin >> k;
    xuat(a, n, k);

    return 0;
}
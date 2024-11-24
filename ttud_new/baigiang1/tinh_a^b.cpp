#include <bits/stdc++.h>
using namespace std;

const int modular_exponentiation = 1e9; // lấy lũy thừa modular là 10^9 <-> tương đương lấy 9 chữ số cuối 

long long powerMod(int a, int b, int mod) {
    long long result = 1;
    long long base = a;
    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        b /= 2;
    }
    return result;
}

int main() {
    int a, b;
    cout << "Nhap a: "; cin >> a;
    cout << "Nhap b: "; cin >> b;

    long long res = powerMod(a, b, modular_exponentiation);
    cout << res << endl;
    return 0;
}
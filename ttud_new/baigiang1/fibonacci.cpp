#include "bits/stdc++.h"
using namespace std;

void Fibonacci(int n){
    int f0 = 0, f1 = 1, fn;
    if(n == 0) cout << f0;
    else if(n == 1) cout << f1;
    else{
        for(int i = 2; i <= n; i++){
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
        }
        cout << fn;
    }
}

int main(){
    int n;
    cout << "Nhap n: "; cin >> n;
    cout<<"So Fibonacci thu "<<n<<" la: "; 
    Fibonacci(n);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

map<int, long long> a;
long long fibonacci(int n){
	if(n<3) return n;
	
	auto p=a.find(n);
	if(p!=a.end()) return p->second;
	
	int k=n/3;
	long long kq= fibonacci(2*k);
	if(n%3>0) kq+= fibonacci(2*k+1);
	if(n%3>1) kq+=fibonacci(2*k+2);
	a[n]=kq;
	return a[n];
}

int main(){
	int n;cout<<"Nhap n = ";cin>>n;
	cout<<"f("<<n<<") = "<<fibonacci(n);
}

#include<bits/stdc++.h>
using namespace std;

map<int, long long> a;
long long g(int n){
	if(n==1||n==3) return n;
	auto p=a.find(n);
	if(p!=a.end()) return p->second;
	long long kq=0;
	if(n%2==0) kq=g(n/2);
	else{
		int m=n/4;
		if(n%4==1) kq=2*g(2*m+1)-g(m);
		if(n%4==3) kq=3*g(2*m+1)-2*g(m);
	}
	a[n]=kq;
	return kq;
}

int main(){
	int n;
	cout<<"Nhap n = ";cin>>n;
	cout<<"g("<<n<<") = "<<g(n);
}

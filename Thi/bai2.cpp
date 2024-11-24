#include<bits/stdc++.h>
using namespace std;

map <long long, long long> a;
long long f(long long n){
	a[0]=1;a[1]=0;a[2]=1;a[3]=1;
	for(int i=4;i<=n;i++) a[i]=a[i-2]+a[i-3]+a[i-4];
	return a[n];
}

int main(){
	long long n;cin>>n;
	cout<<f(n);
}

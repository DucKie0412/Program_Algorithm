#include<bits/stdc++.h>
using namespace std;

map <int, long long> a;
long long fibonacci(long long k){
	if(k<0) return 0;
	a[0]=0;
	a[1]=1;
	int i=1;
	while(a[i]<=k){
		++i;
		a[i]=a[i-1]+a[i-2];
	}
	return a[i];
}

//long long fibonacci(int n){
//	if(n<=2) return n;
//	int k=n/3;
//	if(n%3==0) return fibonacci(2*k);
//	else if(n%3==1) return fibonacci(2*k)+fibonacci(2*k+1);
//	else return fibonacci(2*k)+fibonacci(2*k+1)+fibonacci(2*k+2);
//}
//
//int main(){
//	long long k;cin>>k;
//	cout<<fibonacci(k);
//}

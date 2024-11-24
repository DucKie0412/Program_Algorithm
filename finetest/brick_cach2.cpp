#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a[10000],kq=0;
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	int max=a[n-1];
	if(max<=n) kq=max+1;
	else kq=n;
	cout<<kq;
}

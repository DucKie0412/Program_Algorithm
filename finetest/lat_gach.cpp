#include <bits/stdc++.h>
using namespace std;

int n,a[1000];

void lat_gach(){
	a[0]=1;
	a[1]=1;
	for(int i=2;i<=n;i++){
		a[i]=a[i-1]+2*a[i-2];
	}
	cout<<a[n];
} 
int main(){
	cout<<"N = ";cin>>n;
	cout<<"So phuong an = ";lat_gach();
}

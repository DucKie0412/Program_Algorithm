#include<bits/stdc++.h>
using namespace std;

const int n=3;
const int w=19;
int a[]={14,10,6};
int b[]={20,16,8};

int f[n+1][w+1],k,h;

int main(){
	for(h=0;h<=w;h++)f[0][h]=0;
	for(k=1;k<=n;k++){
		for(h=0;h<=w;h++){
			f[k][h]=f[k-1][h];
			if(h>=a[k-1])f[k][h]=max(f[k-1][h],f[k-1][h-a[k-1]]+b[k-1]);
		}
	}
	cout<<"Gia tri toi da mang theo = "<<f[n][w]<<endl;
	
	for(k=n,h=w;k>0;k--){
		if(f[k][h]!=f[k-1][h]){
			cout<<"Chon do vat thu "<<k<<endl;
			h=h-a[k-1];
		}
	}
}

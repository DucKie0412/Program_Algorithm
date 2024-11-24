#include<bits/stdc++.h>
using namespace std;

const int M=5;
int p[M]={100,25,10,5,1},n,z=10000,a[M];

void print(int t){
//	if(t>=z) return;
	z=t;
	cout<<"Tim duoc phuong an tot nhat, su dung "<<z<<" dong xu"<<endl;
	for(int i=0;i<M;i++){
		cout<<a[i]<<"x"<<p[i]<<" ";
	}
	cout<<endl;
}

void sinh(int k, int n,int t){
	if(t+n/p[k]>=z) return;
	if(k==M-1){
		if(n%p[k]==0){
			a[k]=n/p[k];
			print(t+a[k]);
	}
		return;
	}
	//Thu cac phuong an cua dong tien p[k] 
	for(int i=n/p[k];i>=0;i--){
		a[k]=i;
		sinh(k+1,n-p[k]*i,t+1);
	}
//	a[k]=n/p[k];
//	sinh(k+1,n-a[k]*p[k],t+a[k]);
}

int main(){
	cout<<"Nhap N = ";cin>>n;
	sinh(0,n,0);
}

#include<bits/stdc++.h>
using namespace std;

int n=9,a[100],dem=0;
bool b[100];

int sum(){
	return a[1]+a[2]-a[3]+a[4]-a[5]+a[6]-a[7]+a[8]-a[9];
}

void print(){
	if(sum()!=23) return;
//	for(int i=1;i<n;i++){
//		if(i%2==1)
//			cout<<a[i]<<" + ";
//		else cout<<a[i]<<" - ";
//	}
//	cout<<a[n]<<" = 23"<<endl;
	dem++;
}

void gen(int k){
	if(k>n){
		print();return;	
	} 

	for(int i=1;i<=n;i++){
		if(b[i]){
			b[i]=false;
			a[k]=i;
			gen(k+1);
			b[i]=true;
		}
	}
}

int main(){
	for(int i=1;i<=n;i++) b[i]=true;
	gen(1);
	cout<<"Co "<<dem<<" cach phan tich";
}

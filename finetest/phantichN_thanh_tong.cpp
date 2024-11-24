#include<bits/stdc++.h>
using namespace std;

map<int,int> a;
void print(int k,int tmp){
	cout<<tmp<<" = ";
	for(int i=1;i<k-1;i++){
		cout<<a[i]<<"+";
	}
	cout<<a[k-1]<<endl;	
}

void f(int n,int k,int tmp){
	if(n<=0){
		if(n==0) print(k,tmp);
		return;
	}
	
	for(int i=n;i>=1;i--){
		if(a[k-1]>=i){
			a[k]=i;
			f(n-a[k],k+1,tmp);	
		}
		
	}
}

int main(){
	int n;
	cout<<"Nhap n = ";cin>>n;
	int tmp=n;
	a[0]=10000;
	f(n,1,tmp);
}

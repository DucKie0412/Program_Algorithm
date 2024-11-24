#include <bits/stdc++.h>
using namespace std;

int n,m;
map <int,int> a;

void print(){
	int sum=0;
	for(int i=1;i<=m;i++) sum+=a[i];
	if(sum==n){
		cout<<n<<" = ";
		for(int i=1;i<m;i++) cout<<a[i]<<"+";
		cout<<a[m]<<endl;
	}
}

void PhanTich(int index){
	if(index>m){
		print();
		return;
	}
	
	int p=0;
	for(int i=1;i<index;i++)p+=a[i];
	for(int i=1;i<=n-m-p+index;i++){
		a[index]=i;
		PhanTich(index+1);
	}
}

int main(){
	cout<<"Nhap n = ";cin>>n;
	cout<<"Nhap m = ";cin>>m;
	PhanTich(1);
}

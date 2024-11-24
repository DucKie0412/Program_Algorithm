#include<bits/stdc++.h>
using namespace std;

map <int, int> a;
int n,m;
void print(){
	int sum=0;
	for(int i=1;i<=m;i++) sum+=a[i];
	if(sum==n){
		cout<<n<<" = ";
		for(int i=1;i<=m;i++){
			if(i!=m) cout<<a[i]<<"+";
			else cout<<a[i];
		}
		cout<<endl;
	}
}

void phanTich(int index){
	if(index>m){
		print();
		return;
	}
	int t=0;
	for(int i=1;i<index;i++) t=t+a[i];
	for(int i=1;i<=n-t-m+index;i++){
		a[index]=i;
		phanTich(index+1);
	}
}

int main(){
	cout<<"Nhap n = ";cin>>n;
	cout<<"Nhap m = ";cin>>m;
	clock_t time=clock();
	phanTich(1);
	cout<<clock()-time<<"ms";
}

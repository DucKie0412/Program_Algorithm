#include <bits/stdc++.h>
using namespace std;

int m,n,a[1000],b[1000],c[1000][1000];

void print(int m, int n){
	if(c[m][n]==0) return;
	if(a[m-1]==b[n-1]){
		print(m-1,n-1);
		cout<<a[m-1]<<" ";
		return;
	}
	if(c[m][n]==c[m-1][n])print(m-1,n);
	else print(m,n-1);
}

void sinh(){
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(i==0||j==0) c[i][j]=0;
			else{
				if(a[i]==b[j]) c[i][j]=c[i-1][j-1]+a[i];
				else c[i][j]=max(c[i-1][j],c[i][j-1]);
			}
		}
	}
	cout<<"Day con co tong lon nhat = "<<c[m][n];
} 

int main(){
	cout<<"Nhap m = ";cin>>m;
	for(int i=1;i<=m;i++){
		cout<<"a["<<i<<"] = ";cin>>a[i];
	}
	
	cout<<"Nhap n = ";cin>>n;
	for(int i=1;i<=n;i++){
		cout<<"b["<<i<<"] = ";cin>>b[i];
	}
	sinh();
	cout<<endl;
	print(m,n);

}

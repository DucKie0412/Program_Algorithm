#include <bits/stdc++.h>
using namespace std;

int n,m,kq=0;

void DuongDiTrenLuoi(){
	int a[m+1][n+1];
	for(int i=0;i<=m;i++) a[i][0]=1;
	for(int j=0;j<=n;j++) a[0][j]=1;

	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(i!=0&&j!=0){
				a[i][j]=a[i-1][j]+a[i][j-1];
			}
		}
	}
	cout<<a[m][n];
}

int main(){
	cout<<"Nhap M = ";cin>>m;
	cout<<"Nhap N = ";
	cin>>n;
	cout<<"So cach = ";
	DuongDiTrenLuoi();
}


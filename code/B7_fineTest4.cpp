#include <iostream>
using namespace std;
int a[100];
int m,n;
void init(){
	cout<<"Nhap n = ";cin>>n;
	cout<<"Nhap m = ";cin>>m;
}
void print() {
	int t=0;
	for(int i=1; i<=m;i++) t=t+a[i];
	if(t==n)
	{
		cout<<n<<" = ";
		for (int i = 1; i <= m; i++)
		{
			if(i!=m)
				cout<<a[i]<<"+";
			else
				cout<<a[i];
		}
		cout<<endl;	
	}
}
void gen(int k) {
	if (k > m) {
		print();
		return ;
	}
	int p=0;
	for(int i=1; i<=k-1;i++) p=p+a[i];
	for(int i=1;i<=n-p-m+k;i++)
	{
		a[k] = i;
		gen(k+1);
	}
}

int main() {
	init();
	gen(1);
	}

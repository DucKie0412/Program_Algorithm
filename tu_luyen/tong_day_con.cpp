//#include<bits/stdc++.h>
//using namespace std;
//
//int m,n;
//int a[1000],kq=0,t=0;
//map<int,int> tmp;
//
//void f(int i){
//	if(t>m){
//		kq++;
//		return;
//	}
//	for(;i<n;i++){
//		t+=a[i];
//		f(i+1);
//		t-=a[i];
//	}
//}
//
//int main(){
//	cout<<"Nhap m = ";cin>>m;
//	cout<<"Nhap n = ";cin>>n;
//	for(int i=0;i<n;i++){
//		cout<<"a["<<i<<"] = ";cin>>a[i];
//	}
//	f(0);
//	cout<<"Co tat ca "<<kq<<" cach phan tich.";
//}
//


//#include<bits/stdc++.h>
//using namespace std;
//
//map<int, int> a;
//
//int n,k;
//int f(int s,int i){
//	if(s==k) return 1;
//	if(i>n) return 0;
//	return f(s,i+1)+f(s+a[i],i+1);
//}
//
//int main(){
//	cout<<"Nhap m = "; cin>>k;
//	cout<<"Nhap n = "; cin>>n;
//	for(int i=0;i<n;i++){
//		cout<<"a["<<i<<"] = ";
//		cin>>a[i];
//	} 
//	cout<<"Co tat ca "<<f(0,0)+1<<cach phan tich.;
//}

#include<bits/stdc++.h>
using namespace std;

map<int, int> a;

int n,k;
int f(int s,int i){
	if(s==k) return 1;
	if(i>n) return 0;
	return f(s,i+1)+f(s+a[i],i+1);
}

int main(){
	cout<<"Nhap m = "; cin>>k;
	cout<<"Nhap n = "; cin>>n;
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	} 
	cout<<"Co tat ca "<<f(0,0)+1<<cach phan tich.;
}

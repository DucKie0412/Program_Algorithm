#include<bits/stdc++.h>
using namespace std;
int a[10000];
map <pair<int,int>,long long> cache;
long long F(int k,int s){
	if(s<0) return 0;
	if(k==0) return (s==0)? 1:0;
	auto p =cache.find({k,s});
	if(p!=a.end()) return p->second;
	cache[{k,s}]= F(k-1,s)+F(k-1,s-a[k-1]);
	return cache[{k,s}];
}

int main(){
	int k;
	cout<<"Nhap k = ";cin>>k;
	int s=k;
	for(int i=0;i<k;i++) a[i]=i+1;
	cout<<"Co tat ca "<<F(k,s)-1<<" cach phan tich.";
}

//#include<bits/stdc++.h>
//using namespace std;
//
//map<int,long long> a;
//int b[1000];
//int kq=-1;//Loai truong hop n = n
//
//void f(int k,int index){
//	if(k<=0){
//		if(k==0){
//			kq++;
//		} 
//		return;
//	}
//	for(int i=k;i>=1;i--){
//		if(b[i]==0&&a[index-1]>=i){ //so dg xet phai nho hon so lon nhat trg day in
//			a[index]=i;
//			b[i]=1;
//			f(k-a[index],index+1);
//			b[i]=0;	
//		}
//	}
//}
//
//int main(){
//	int k;
//	cout<<"Nhap k = ";cin>>k;
//	for(int i=1;i<=k;i++) b[i]=0;
//	a[0]=1000;
//	f(k,1);
//	cout<<"Co tat ca "<<kq<<" cach phan tich.";
//}
//



#include<bits/stdc++.h>
using namespace std;
//int a[]={1,5,3,4,2};
//int searchK(int k){
//	int count=0;
//	for(int x:a){
//		count+=upper_bound(begin(a),end(a),x+k)-lower_bound(begin(a),end(a),x+k);
//	}
//	return count;
//}
double a,b,c,d,x;
double phuongTrinhBac3(int x){
	return a*x*x*x+b*x*x+c*x+d;
}

double nghiem(double x){
	double l=-x,r=x;
	while(l<=r){
		double m=l+(r-l)/2;
		if(phuongTrinhBac3(x)<=0.00001&&phuongTrinhBac3(x)>=-0.00001) return x;
		if(phuongTrinhBac3(m)>0)l=m;
		else r=m;
	}
}

int main(){
	int n,k;
//	cout<<"Nhap N = ";cin>>n;
//	cout<<"Nhap k = ";cin>>k;
//	sort(begin(a),end(a));
//	cout<<searchK(k);
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	cin>>x;
	cout<<nghiem(x);
}

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,kq=0;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	sort(arr,arr+n);
	set<int> a;
	for(int i=0;i<n;i++) a.insert(arr[i]);
	for(int i=0;i<n-4;i++){
		for(int j=i+1;j<n;j++){
			int d=arr[j]-arr[i];
			set<int>::iterator tmp1=find(begin(a),end(a),arr[j]+d);
			set<int>::iterator tmp2=find(begin(a),end(a),arr[j]+2*d);
			set<int>::iterator tmp3=find(begin(a),end(a),arr[j]+3*d);
			if(tmp1!=end(a)&&tmp2!=end(a)&&tmp3!=end(a)) kq++;
		}
	}

	cout<<kq;
}

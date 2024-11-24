#include<bits/stdc++.h>
using namespace std;

int main(){
	string s,tmp;
	getline(cin,s);
	int n;cin>>n;
	long long arr[n];
	char kq[n];
	map <int,char> a;
	tmp=s;
	reverse(tmp.begin(),tmp.end());
	s=s+tmp;
	for(int i=0;i<s.size();i++) a[i]=s[i];
	for(int i=0;i<n;i++) cin>>arr[i];
	for(int i=0;i<n;i++){
		int temp=arr[i]%(s.size());
		kq[i]=a[temp];
	}
	for(int i=0;i<n;i++)
		cout<<kq[i]<<endl;
	
}

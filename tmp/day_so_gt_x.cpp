#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	vector <int> a;
	for(int i=0;i<n;i++){
		int tmp;cin>>tmp;
		a.push_back(tmp);
	}
	sort(a.begin(),a.end(),greater<int>());
	for(int i:a)cout<<i<<" ";
	int x;cout<<"x = ";cin>>x;
	auto pos=lower_bound(a.begin(),a.end(),x);
	cout<<a[*pos];

}

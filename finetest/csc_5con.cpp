#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int kq=0;
void csc(int x, int d,int index,vector<int> a){
	int vt=find(a.begin(),a.end(),x+d)-a.begin();
	if(vt!=a.end()-a.begin()) 
		if(index==5) kq++;	
	else csc(x+d,d,++index,a);
}

int main(){
	int n;cin>>n;
    set<int, less <int> > s1;
    for (int i = 0; i <n; i++) {
        int x;
        cin>>x;
        s1.insert(x);
    }
    vector <int> a;
	
    for(auto x:s1) a.push_back(x);
    n=a.size();
    for(int i=0;i<n-4;i++){
		for(int j=i+1;j<n-3;j++){
			int d=a[j]-a[i];
			csc(a[j],d,3,a);
		}
	}
	cout<<kq;
}

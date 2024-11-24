#include<bits/stdc++.h>
using namespace std;

int main(){
	long long tu,mau,res;
	cin>>tu>>mau;
	while(1){
		if(mau%tu==0){
			cout<<"1/"<<mau/tu;
			break;
		}
		else{
			res=mau/tu+1;
			cout<<"1/"<<res<<" + ";
			tu=tu*res-mau;
			mau=mau*res;
		}
	}
}

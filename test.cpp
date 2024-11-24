#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	long long kq=0;
	for(int i=1;i<=sqrt(n);i++){
		for(int j=i+1;j<=sqrt(n);j++){
			if(j*j+i*j>n) break;
			if(__gcd(i,j)==1&&(i+j)%2==1){
				int a=j*j-i*i;
				int b=2*i*j;
				int c=i*i+j*j;
				int tmp1=a,tmp2=b,tmp3=c;
				while(tmp1+tmp2+tmp3<=n){
					kq++;
					tmp1+=a;
					tmp2+=b;
					tmp3+=c;
				}
			}
		}
	}
	cout<<kq;
}

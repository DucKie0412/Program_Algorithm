#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,kq=0;cin>>n;
	for(int i=1;i<=sqrt(n);i++){
		for(int j=i+1;j<=sqrt(n);j++){
			if(j*j-i*i+2*i*j>=n)break;
			if(__gcd(i,j)==1&&(i+j)%2==1){
				long long a=j*j-i*i;
				long long b=2*i*j;
				long long c=i*i+j*j;
				long long tmp1=a,tmp2=b,tmp3=c; 
				while(tmp1+tmp2+tmp3<=n){
					kq++;
					tmp1+=a;
					tmp2+=b;
					tmp3+=c;
				}	
			}
		}
	}
	cout<<kq<<endl;
}

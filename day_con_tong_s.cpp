#include<bits/stdc++.h>
using namespace std;
const int s=7,n=8;

int a[]={1,7,6,3,3,4,2};
int c[s+1][n+1];
int main(){
	for(int p=0;p<=s;p++){
		for(int q=0;q<=n;q++){
			if(q==0){
				c[p][q]=(p==0)?1:0;
				continue;
			} 
			c[p][q]=c[p][q-1];
			if(p>=a[q-1]) c[p][q]+=c[p-a[q-1]][q-1];
		}
	}
	cout<<"So cach phan tich = "<<c[s][n];
}

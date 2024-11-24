#include<bits/stdc++.h>
using namespace std;
vector<int> arr = {3,2,1};
int countInversions()
{
    int count=0;
    for(int i=0;i<arr.size();i++){
        for(int j=i;j<arr.size();j++){
            if(arr[i]>arr[j]){
                count++;
            }
        }
    }
    return count;
}
int main(){
	int count=countInversions();
	cout<<count;
}


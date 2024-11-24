#include<bits/stdc++.h>
using namespace std;

vector <int> arr={3,2,1};
int res=0;
void mergeSort(int trai,int phai,int giua,vector<int> &temp,vector<int> &arr){
	int left=trai,mid=giua+1,leftTemp=trai;
	while(left<=giua&&mid<phai){
		if(arr[left]<arr[mid])
		{
			temp[leftTemp]=arr[left];
			left++;
			leftTemp++;
		}
		else{
			temp[leftTemp]=arr[mid];
			leftTemp++;
			mid++;
			res+=giua-leftTemp+1;
		}
	}
	while(left<=giua){
		temp[leftTemp]=arr[left];
		left++;
		leftTemp++;
	}
	while(mid<=phai){
		temp[leftTemp]=arr[mid];
		leftTemp++;
		mid++;
	}
	for(int i=trai;i<=phai;i++) arr[i]=temp[i];
}


void divide(int trai,int phai,vector<int> &temp,vector<int> &arr){
	if(trai>=phai) return;
	int giua=(trai+phai)/2;
	divide(trai,giua,temp,arr);
	divide(giua+1,phai,temp,arr);
	mergeSort(trai,phai,giua,temp,arr);
}

void solve(vector<int> &arr) {
    vector<int> temp(arr.size(), 0);
    divide( 0, arr.size() - 1, temp,arr);
}

int countInversions(vector<int> &arr)
{
    solve(arr);
    return res;
}

int main(){
	int count=countInversions(arr);
	cout<<count;
}

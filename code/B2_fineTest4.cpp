#include<bits/stdc++.h>

using namespace std;

int n;
int a[203];
int ans=0;


int nhiphan(int i,int j, int ss)
{
    if (i>j) return -1;
    int mid = (i+j)/2;
    if (a[mid]==ss) return mid;
    else if (ss<a[mid]) return nhiphan(i,mid-1,ss); else return nhiphan(mid+1,j,ss);

}

void backk(int i, int j, int next, int csc)
{
    int tmp = nhiphan(j,n,next+csc);
    if (tmp != -1)
        if (i==5) ans+=1; else backk(i+1,tmp+1,next+csc,csc);

}

int main()
{
    cin>>n;
    for (int i=1; i<=n; i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    for (int i=1; i<=n-4; i++)
        for (int j=i+1; j<=n-3; j++)
            backk(3,j+1,a[j],a[j]-a[i]);
//    for (int i=1; i<n; i++) if (a[i]==a[i+1]) ++ans; //dong code chay cho ton thoi gian :)))
    cout<<ans;
    return 0;
}

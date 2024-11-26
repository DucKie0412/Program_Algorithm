#include<bits/stdc++.h>
using namespace std;

int a[] = { -2, 11, -4, 13, -5, 2};

int trai( int dau, int cuoi) {
	int m = a[cuoi], s = 0;
	for (int i = cuoi; i >= dau; i--) {
		s += a[i];
		if (s > m) m = s;
	}
	return m;
}


int phai(int dau, int cuoi) {
	int m = a[dau], s = 0;
	for (int i = dau; i <= cuoi; i++) {
		s += a[i];
		if (m < s) m = s;
	}
	return m;
}

int chia_de_tri(int dau, int cuoi) {
	if (dau == cuoi) return a[dau];
	int mid = (dau + cuoi) / 2;
	int m_trai = chia_de_tri(dau,mid);
	int m_phai = chia_de_tri(mid+1,cuoi);
	int m_giua = trai(dau, mid) + phai(mid + 1, cuoi);
	cout<<"m_trai"<<m_trai<<endl;
	cout<<"m_phai"<<m_phai<<endl;
	cout<<"trai"<<trai(dau, mid)<<endl;
	cout<<"phai"<<phai(mid + 1, cuoi)<<endl<<endl;
//	int a[] = { -2, 11, -4, 13, -5, 2};

	return max(m_giua, max(m_trai, m_phai));
	
}
int main() {
	int m = chia_de_tri(0, 5);
	cout << m;
	
}

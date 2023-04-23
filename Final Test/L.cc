#include <bits/stdc++.h>
using namespace std;

const int MxN = 1010;
int a[MxN];

int main(){
	int n, cnt = 0;
	cin >> n;
	for(int i=1; i<=n; ++i){
		cin >> a[i];
	}
	for(int i=2; i<n; ++i){
		cnt += (a[i] < a[i - 1] && a[i] < a[i + 1]);
	}
	cout << cnt;
	return 0;
}

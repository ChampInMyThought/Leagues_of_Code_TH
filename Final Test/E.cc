#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x, maxx = 0;
	cin >> n;
	for(int i=1; i<=n; ++i){
		cin >> x;
		maxx = max(maxx, x);
	}
	cout << maxx;
	return 0;
}

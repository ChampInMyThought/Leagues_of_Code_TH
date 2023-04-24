#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, cnt = 0, x, y;
	cin >> n >> m;
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=m; ++j){
			cin >> x >> y;
			cnt += (x == 1 || y == 1);
		}
	}
	cout << cnt;
	return 0;
}

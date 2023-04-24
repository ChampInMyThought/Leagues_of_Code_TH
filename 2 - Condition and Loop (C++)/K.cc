#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x, cnt = 0;
	for(cin >> n; n>=1; --n){
		cin >> x;
		if(x == 0){
			cnt++;
		}
	}
	cout << cnt << "\n";
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x, sum = 0;
	cin >> n;
	for(int i=2; i<=n; ++i){
		cin >> x;
		sum += x;
	}
	cout << n * (n + 1) / 2 - sum << "\n";
	return 0;
}

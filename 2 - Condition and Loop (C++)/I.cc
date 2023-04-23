#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x, sum = 0;
	for(cin >> n; n>=1; --n){
		cin >> x;
		sum += x;
	}
	cout << sum << "\n";
	return 0;
}

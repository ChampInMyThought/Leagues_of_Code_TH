#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if(min(a, b) <= min(c, d) && max(a, b) <= max(c, d)){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	cout << "\n";
	return 0;
}

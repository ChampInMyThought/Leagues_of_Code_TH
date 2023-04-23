#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	if(n % 7 == 0 && n % 11){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	return 0;
}

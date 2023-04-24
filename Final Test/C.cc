#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, ans = 0;
	cin >> n;
	for(int i=1; i<=n; ++i){
		if(i & 1){
			ans += 1;
		}
		else{
			ans += 2;
		}
	}
	cout << ans << "\n";
	return 0;
}

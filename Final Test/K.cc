#include <bits/stdc++.h>
using namespace std;

const int MxN = 100010;
int c[MxN];

int main(){
	int n;
	cin >> n;
	for(int i=1, x; i<=n; ++i){
		cin >> x;
		c[x] = i;
	}
	int last = n + 1, answer = -1;
	for(int i=1; i<MxN; ++i){
		if(c[i] == 0){
			continue;
		}
		if(c[i] < last){
			last = c[i];
			answer = i;
		}
	}
	cout << answer;
	return 0;
}

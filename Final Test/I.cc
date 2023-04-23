#include <bits/stdc++.h>
using namespace std;

int main(){
	string s, div = "";
	cin >> s;
	for(int len=1; len<=s.size(); ++len){
		div += s[len - 1];
		if((int) s.size() % len != 0){
			continue;
		}
		string now = "";
		int t = s.size() / len;
		while(t--){
			now += div;
		}
		if(now == s){
			cout << div << "\n";
			return 0;
		}
	}
	return 0;
}

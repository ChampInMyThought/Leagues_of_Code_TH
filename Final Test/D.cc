#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	bool found = false;
	for(int i=0; i<s.size(); ++i){
		for(int j=i+1; j<s.size(); ++j){
			if(s[i] == s[j]){
				found = true;
			}
		}
	}
	cout << (found ? "NO": "YES") << "\n";
	return 0;
}

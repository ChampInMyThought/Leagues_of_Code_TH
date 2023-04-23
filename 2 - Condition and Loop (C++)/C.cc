#include <bits/stdc++.h>
using namespace std;

int main() {
	int score;
	cin >> score;
	if(score > 80){
		cout << "Achieved";
	}
	else if(score > 40){
		cout << "Developing";
	}
	else{
		cout << "Emerging";
	}
	cout << "\n";
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	if(t > 35){
		cout << "CANCEL SCHOOL";
	}
	else if(t > 30){
		cout << "CANCEL TWO CLASSES";
	}
	else{
		cout << "NORMAL CLASSES";
	}
	cout << "\n";
	return 0;
}

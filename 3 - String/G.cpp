#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string S;
    char C;
    int ans;
    cin >> S;
    cin >> C;
    for(int i=0;i<S.length();i++){
        if(S[i] == C) ans = i;
    }
    cout << ans;
}

/*
G. Last Occurrence

abacaba
b
5

hello
l
3
*/
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string S,ans;
    cin >> S;
    for(int i=S.length()/2;i<S.length();i++){
        ans += S[i];
    }
    for(int i=0;i<S.length()/2;i++){
        ans += S[i];
    }
    cout << ans;
}

/*
J. Swap Halves

abcxyz
xyzabc

abcdefgh
efghabcd

uv
vu
*/
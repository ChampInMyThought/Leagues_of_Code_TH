#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string S,ans;
    char A;
    cin >> S;
    cin >> A;
    for(int i=0;i<S.length();i++){
        if(i == S.length()/2) ans += A;
        ans += S[i];
    }
    cout << ans;
}

/*
H. Insert In the Middles

abba
c
abcba

testtest
x
testxtest

aa
b
aba
*/
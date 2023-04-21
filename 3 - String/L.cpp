#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    cout << S[S.length()/2-1] << S[S.length()/2] << S[S.length()/2+1];
}

/*
L. Three Middle Letters

abcxyzabc
xyz

abcdefghijklm
fgh

abbba
bbb

loc
loc
*/
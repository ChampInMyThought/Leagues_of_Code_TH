#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string S,ans;
    cin >> S;
    for(int i=0;i<S.length();i++){
        ans += S[i];
        if(i != S.length() - 1) ans += '_';
    }
    cout << ans;
}

/*
I. Underscores

hello
h_e_l_l_o

abacaba
a_b_a_c_a_b_a

abcdefgh
a_b_c_d_e_f_g_h

x
x
*/
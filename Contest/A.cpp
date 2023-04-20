#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string S1,S2;
    cin >> S1 >> S2;
    if(S1.length() != S2.length()){
        cout << "NO";
        return 0;
    }
    for (int i=0;i<S1.length();i++)
    {
        if(S1[i] != S2[S1.length()-i-1])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}

/*
A - Translation CodeForces - 41A 
code
edoc
YES

abb
aba
NO
*/
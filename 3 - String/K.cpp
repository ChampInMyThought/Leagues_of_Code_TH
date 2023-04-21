#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string S;
    int a_count = 0, b_count = 0;
    cin >> S;
    for(int i=0;i<S.length();i++)
    {
        if(S[i] == 'a') a_count++;
        else if(S[i] == 'b') b_count++;
    }
    if(a_count % 2 == 1 and b_count % 2 == 1) cout << "NO";
    else cout << "YES";
}

/*
K. Palindrome Reordering

aabbaaaa
YES

abba
YES

aaabbb
NO

aabaabb
YES
*/
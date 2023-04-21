#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string A;
    cin >> A;
    for(int i=0;i<A.length()/2;i++){
        if(A[i] != A[A.length() - i - 1]){
            cout << "NO";
            return 0 ;
        }
    }
    cout << "YES";
}

/*
F. Is palindrome?

abacaba
YES

palindrome
NO

a
YES
*/
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main()
{
    string A;
    int count = 0;
    cin >> A;
    for(int i=0;i<A.length();i++){
        if(A[i] == 'f') count++;
    }
    cout << count;
}

/*
D. Press F to Pay Respects

respectfffffulness
5
*/
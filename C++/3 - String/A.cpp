#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main()
{
    string A,B;
    int num_A = 0, num_B = 0;
    cin >> A;
    cin >> B;

    for(int i=0;i<A.length();i++){
        num_A += (A[i]-'0') * pow(10,A.length() - i - 1);
    }
    for(int i=0;i<B.length();i++){
        num_B += (B[i]-'0') * pow(10,B.length() - i - 1);
    }

    cout << A + B << " " << num_A + num_B;
}

/*
A. Incorrect A + B

1
2
12 3

10
7
107 17

10
10
1010 20

12
345
12345 357

1000
999
1000999 1999
*/
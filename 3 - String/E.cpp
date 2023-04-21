#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main()
{
    string G;
    int A_count = 0, B_count = 0;
    cin >> G;
    for(int i=0;i<G.length();i++){
        if(G[i] == 'A') A_count++;
        else if(G[i] == 'B') B_count++;
    }
    if(A_count == B_count) cout << "DRAW";
    else if(A_count > B_count) cout << "ALICE";
    else cout << "BOB";
}

/*
E. Games

AABBA
ALICE
*/
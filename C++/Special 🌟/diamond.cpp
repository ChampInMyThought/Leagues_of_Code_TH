#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    // UPPER HALF
    for(int i=0;i<N;i++){
        for(int j=0;j<N*2+1;j++){
            if( j < N-i or j > N+i ) cout << ".";
            else cout << "*";
        }
        cout << "\n";
    }

    // BOTTOM HALF
    // The inside for loop and code statement is the same, we only change condition of i in the first for loop
    for(int i=N-2;i>=0;i--){
        for(int j=0;j<N*2+1;j++){
            if( j < N-i or j > N+i ) cout << ".";
            else cout << "*";
        }
        cout << "\n";
    }
}

/*
Diamond

3
  *
 ***
*****
 ***
  *

5
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/
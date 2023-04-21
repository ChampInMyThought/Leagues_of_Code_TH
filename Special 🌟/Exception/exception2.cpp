#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<2*N-1;j++)
        {
            if(j<N-i-1 or j>N+i-1){
                cout << " ";
            }
            else cout << "*";
        }
        cout << "\n";
    }
    for(int i=N-2;i>=0;i--)
    {
        for(int j=0;j<2*N-1;j++)
        {
            if(j<N-i-1 or j>N+i-1) cout << " ";
            else cout << "*";
        }
        cout << "\n";
    }
}

/*
3
  *
 ***
*****

[] [] [] []
[] [] [] []
[] [] [] []

 ***
  *
*/
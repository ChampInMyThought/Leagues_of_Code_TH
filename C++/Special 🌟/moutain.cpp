#include <iostream>
using namespace std;

int main()
{
    int table[1000][1000];
    vector<char> A;
    int N;
    cin >> N;
    A.resize(N+1);

    //LET USER INPUT THE SYMBOLS
    for(int i=1;i<=N;i++){
        cin >> A[i];
    }

    // MATH BEHIND BUILDING OUR CALCULATION
    /*
    EXAMPLE
    3
    00100
    01210
    12321
    */
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=2*N-1;j++)
        {
            int expand = j - N;
            if(expand < 0){
                expand = expand * -1;
            }
            cout << expand;
            table[i][j] = i - expand;
        }
        cout << "\n";
    }

    //DISPLAY ABOVE ARRAY[][] BY USER'S SYMBOL 
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=2*N-1;j++)
        {
            if(table[i][j]>0){
                cout << A[table[i][j]];
            }
            else{
                cout << " ";
            }
        }
        cout << "\n";
    }
}

/*
Moutain

3
& O .
  &
 &O&
&O.O&

3
00100
01210
12321

0 -> [0,0 = 0] [0,1 = 0] [0,2 = 1] [0,3 = 0] [0,4 = 0]
1 -> [1,0 = 0] [1,1 = 1] [1,2 = 2] [1,3 = 1] [1,4 = 0]
2 -> [2,0 = 1] [2,1 = 2] [2,2 = 3] [2,3 = 2] [2,4 = 1]
*/
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int i=0;i<T;i++)
    {
        int N;
        cin >> N;
        int tab[N+1][N+1];
        for(int j=0;j<N;j++)
        {
            string line;
            cin >> line;
            for(int k=0;k<line.length();k++)
            {
                tab[j][k] = int(line[k]) - 48;
            }
        }
        /*
        DEBUG
        for(int a=0;a<N;a++)
        {
            for(int b=0;b<N;b++)
            {
                cout << tab[a][b] << " ";
            }
            cout << "\n";
        }
        */
       
    }
}

/*
C - Mirror Grid CodeForces - 1703E 

5
3
010
110
010
1
0
5
11100
11011
01011
10011
11000
5
01000
10101
01010
00010
01001
5
11001
00000
11111
10110
01111

1
0
9
7
6

*/
#include<iostream>
#include<string.h>
using namespace std;

int N, tab[1010][1010] = {0}, n_tab[1010][1010] = {0}, sum_tab[1010][1010] = {0};

int main()
{
    int M;
    cin >> M;
    while(M>0)
    {
        for(int i=0;i<1010;i++){
            for(int j=0;j<1010;j++){
                tab[i][j] = 0;
                n_tab[i][j] = 0;
                sum_tab[i][j] = 0;
            }
        }
        int sum = 0;
        cin >> N;
        for(int i=0;i<N;i++)
        {
            string A;
            cin >> A;
            for(int l=0;l<A.length();l++){
                tab[i][l] = A[l] - '0';
            }
        }
        for(int t=0;t<4;t++){
            for(int i=0;i<N;i++){
                for(int j=0;j<N;j++){
                    //y2 = x1 , x2 = N-y1;
                    n_tab[j][N-1-i] = tab[i][j];
                }
            }
            for(int i=0;i<N;i++){
                for(int j=0;j<N;j++){
                    sum_tab[i][j] += n_tab[i][j];
                    tab[i][j] = n_tab[i][j];
                }
            }
        }
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(sum_tab[i][j] == 2) sum += 2;
                else if(sum_tab[i][j] != 4 and sum_tab[i][j] != 0) sum += 1;
            }
        }
        cout << sum/4 << "\n";
        M--;
    }
}

/*
3
010
110
010

030
343
030
*/
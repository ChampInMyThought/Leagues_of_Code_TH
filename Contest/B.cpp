#include<iostream>
using namespace std;

int main()
{
    float C = 0;
    cin >> C;
    while( C != 0 )
    {
        int card = 1;
        float overhang = 0.5;
        while(overhang < C)
        {
        	card++;
            overhang += 1.0/(1.0 + card);
        }
        cout << card << " card(s)\n";
        
        cin >> C;
    }
}

/*
B - Hangover POJ - 1003 

1.00
3.71
0.04
5.19
0.00

3 card(s)
61 card(s)
1 card(s)
273 card(s)

*/
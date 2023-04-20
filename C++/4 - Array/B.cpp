#include<iostream>
using namespace std;

int main()
{
    int box[1000];
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> box[i];
    }    
    int X;
    cin >> X;
    for(int i=0;i<N;i++)
    {
        box[i]+= X;
        cout << box[i] << " ";
    } 
}

/*
7
1 3 2 8 4 2 5
10
11 13 12 18 14 12 15
*/
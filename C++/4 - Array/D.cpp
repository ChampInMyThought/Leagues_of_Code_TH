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
    for(int i=0;i<N;i++)
    {
        if(box[i]%2==0) cout << box[i] << " ";
    } 
}

/*
6
5 2 8 3 6 7
2 8 6

9
1 3 5 2 4 6 7 9 11
2 4 6
*/
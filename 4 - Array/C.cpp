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
    for(int i=0;i<N;i+=2)
    {
        cout << box[i] << " ";
    } 
}

/*
7
4 1 9 2 3 8 5
4 9 3 5

4
1 2 4 5
1 4
*/
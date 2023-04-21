#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    const int MIN_NUM = -1e9;
    int n_max[2] = {MIN_NUM,MIN_NUM};
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        int num;
        cin >> num;
        if (num > n_max[0]){
            n_max[1] = n_max[0];
            n_max[0] = num;
        }
    }
    cout << n_max[1];
}

/*
5
1 7 3 5 2
5

7
5 9 3 1 7 4 6
7

2
20 10
10
*/
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    const int MAX_NUM = 1e9;
    const int MIN_NUM = -1e9;
    long long n_max[2] = {MIN_NUM,MIN_NUM};
    long long n_min[2] = {MAX_NUM,MAX_NUM};
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        long long num;
        cin >> num;
        if (num > n_max[0]){
            n_max[1] = n_max[0];
            n_max[0] = num;
        }
        else if(num > n_max[1]){
            n_max[1] = num;
        }
        else if(num < n_min[0]){
            n_min[1] = n_min[0];
            n_min[0] = num;
        }
        else if(num < n_min[1]){
            n_min[1] = num;
        }
    }
    cout << max(n_max[0]*n_max[1], n_min[0]*n_min[1]);
}

/*
5
5 -3 2 0 -1
10

6
7 5 1 -10 4 -5
50
*/
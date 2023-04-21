#include<iostream>
#include<algorithm>
using namespace std;

int A[1010];

int main()
{
    int A[1000];
    int N,ans=0;
    cin >> N;
    for(int i=0;i<N;i++){
        int num;
        cin >> num;
        A[num] = 1;
    }
    for(int i=0;i<1010;i++){
        ans += A[i];
    }
    cout << ans;
}

/*
5
1 2 2 3 1
3

6
2 3 1000 1 1000 1
4

4
1 1 1 1
1
*/
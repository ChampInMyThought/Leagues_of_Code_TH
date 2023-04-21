#include<iostream>
#include<algorithm>
using namespace std;

int A[1010];

int main()
{
    int N,count=0;
    cin >> N;
    cin >> A[0];
    for(int i=1;i<N;i++){
        cin >> A[i];
        if(A[i] - A[i-1] > 0){
            count++;
        }
    }
    cout << count;
}

/*
5
2 -3 8 -1 7
NO

4
-3 5 7 -4
YES

3
-7 9 -6
NO

2
-3 -3
YES
*/
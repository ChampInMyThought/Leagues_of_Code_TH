#include<iostream>
#include<algorithm>
using namespace std;

int A[1010];

int main()
{
    int N,count=0;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> A[i];
        if(A[i] < 0){
            A[i] *= -1;
        }
    }
   for(int i=0;i<N;i++){
        cout << A[i] << " ";
    }
}
  
/*
5
1 5 -3 4 -7
1 5 3 4 7

6
9 -1 4 -3 -5 0
9 1 4 3 5 0

4
-1 -2 -3 -4
1 2 3 4

3
10 20 30
10 20 30

1
-8
8
*/
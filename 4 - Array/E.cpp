#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    vector<int> A,B,C;
    cin >> N;
    A.resize(N); 
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    for(int i=0;i<N;i++){
        int num;
        cin >> num;
        B.push_back(num);
    }
    for(int i=0;i<N;i++){
        C.push_back(A[i]);
        C.push_back(B[i]);
    }
    //cout << C.size() << "\n";
    for(int i=0;i<C.size();i++)
    {
        cout << C[i] << " ";
    }
}

/*
5
1 2 3 4 5
10 20 30 40 50
1 10 2 20 3 30 4 40 5 50

[]
[][]

[][][][][]*
*/


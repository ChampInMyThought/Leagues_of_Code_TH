#include <iostream>
using namespace std;

int main()
{
    int N;
    float sum = 0;
    cin >> N;
    for(int i=1;i<=N;i++)
    {
        sum = sum + 1.0/(i);
        //DEBUG
        cout << "DEBUG" << i << ":" << sum << "\n";
    }
    cout << sum;
}
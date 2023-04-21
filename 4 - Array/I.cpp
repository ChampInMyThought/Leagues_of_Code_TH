#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int N,P;
    vector<int> a;

    cin >> N;
    a.resize(N);
    for(int i=0;i<N;i++){
        cin >> a[i];
    }
    cin >> P;
    int far_left = *min_element(a.begin(), a.end());
    int far_right = *max_element(a.begin(), a.end());
    int travel_left =  a[P-1] - far_left;
    int travel_right = far_right - a[P-1];

    cout << min(travel_left + 2*travel_right, travel_right + 2*travel_left);
}

/*
4
3 4 1 8
1
9

5
1 2 3 4 5
5
4
*/
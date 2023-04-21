#include <iostream> // standard input/output stream such as cin >> , cout <<
#include <vector> // Give access to vector<> data structure (like array but more useful)
#include <algorithm> // Use for finding min,max,sort and many more in vector
#include <string.h> // Give access to string data structure
#include <math.h> // Given min,max,cos,sin function & PI variable
using namespace std;

int main()
{
    /*variables*/
    int A = 5;
    long long int A1; 
    float B = 5.0;
    double B2;
    char C = 'A';
    string D = "Hello, World!";

    /*i/o stream*/
    cin >> A >> B;
    cout << "Hello, " << D;

    /*operation*/
    // +, -, *, /, %
    // <,>,==,<=,>=
    bool status; // (1,0) 1 = True, 0 = False
    int A,B;
    cin >> A >> B;

    /*if else*/
    if(/*statement*/) // work if the statement inside () return true
    {
        /*insert code*/
    }
    else if(/*statement*/) // work if the statement from if() functon return false
    {
        /*insert code*/
    }
    else if(/*statement*/) // There can be as many else if as you like
    {
        /*insert code*/
    }
    else /// work if the statement from if() and else if() functons all return false
    {
        /*insert code*/
    }

    /*for, while*/
    int N;
    for(int i=0,i<=N,i++) // arg1 start, arg2 stop, arg3 iterate
    {
        /*insert code*/   
    }
    int X,Y;
    cin >> X >> Y;
    while( X != Y )
    {
        cin >> X >> Y;
        if(X == Y) break;
    }
}
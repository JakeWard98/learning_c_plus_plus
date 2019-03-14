// The conditional operator evaluates an expression,
// returns one value if that expression evaluates to true,
// and a different one if the expression evaluates as false

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    a = 2;
    b = 7;
    c = (a>b) ? a : b;
    
    cout << c << '\n';
}
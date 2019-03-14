#include <iostream>
using namespace std;

int main()
{
    #define NEWLINE '\n'

    // Example 1
    int x = 3;
    int y = ++x;

    cout << x;
    cout << y;
    cout << NEWLINE;

    // Example 2
    int x1 = 3;
    int y1 = x++;

    cout << x1;
    cout << y1;

    // In Example 1, the value assigned to y is the value of x after being increased. 
    // While in Example 2, it is the value x had before being increased.

}
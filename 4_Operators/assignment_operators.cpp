// assignment operator

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    // a is given 10
    a = 10;
    // b is given 4
    b = 4;
    // a is 10 b is 4
    // give a what is in b
    // so a is now 4
    a = b;
    // b is given 7
    b = 7;
    //  a isn't changed again as it hasn't been passed the number again

    cout << "a:";
    cout << a << endl;
    cout << "b:";
    cout << b;
}
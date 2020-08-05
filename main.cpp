#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a = 0, b = 0, square = 1;
    cout << "Enter a:" << endl;
    cin >> a;
    cout << "Enter b:" << endl;
    cin >> b;
    for ( int i = 0; i < b; i++)
    {
        square *= a;
    }
    cout << "Square of " << a << " on power " << b << " is: " << square << endl;
    return 0;
}
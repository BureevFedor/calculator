#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    int d, b;
    char c;
    cin >> d >> c >> b;

    if (c == '+')
        cout << d+b;
    else if (c == '-')
        cout << d-b;
    else if (c == '*')
        cout << d*b;
    else if (c == '/')
        cout << d/b;

    return 0;
}
/**
 * @file calc.cpp
 * @author Fedor Bureev (feodor-arilou1@mail.ru)
 * @brief very simple calculator
 * @version 1.0
 * @date 2021-10-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <fstream>
#include <iostream>
using namespace std;

/**
 * @brief main function of calculator
 * 
 * @return int 
 */
int main()
{
    int a, b;
    char c;
    cin >> a >> c >> b;

    if (c == '+')
        cout << a+b;
    else if (c == '-')
        cout << a-b;
    else if (c == '*')
        cout << a*b;
    else if (c == '/')
        cout << a/b;

    return 0;
}
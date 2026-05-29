#include <iostream>
#include "calc.h"

using namespace std;

int main()
{
    int a = 20, b = 4;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "a + b = " << add(a, b) << endl;
    cout << "a - b = " << sub(a, b) << endl;
    cout << "a * b = " << mult(a, b) << endl;
    cout << "a / b = " << ddiv(a, b) << endl;
    return 0;
}

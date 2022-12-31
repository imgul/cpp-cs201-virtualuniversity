#include <iostream>
#include "pointer_variable_address_operator.h"
using namespace std;

void pointerVariableAddressOperator() {
    int num = 4;
    int* num2;

    cout << "Hello, World!" << endl;
    cout << &num << endl;

    num2 = &num;
    cout << *num2 << endl;
}

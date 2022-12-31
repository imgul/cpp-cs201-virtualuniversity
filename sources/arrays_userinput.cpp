#include "arrays_userinput.h"
#include <iostream>
using namespace std;

void arraysUserInput() {
//    int num[] = {};
//    int inputNum;
//    for(int i = 0; i < 100; i++) {
//        cout << "Enter a number: ";
//        cin >> inputNum;
//
//        if(inputNum < 0) {
//            break;
//        } else {
//            num[i] = inputNum;
//        }
//    }

    int c[100];
    int z , i = 0 ;
    do {
        cout << "Please enter the number (-1 to end input) " << endl;
        cin >> z;
        if(z != -1) {
            c[i] = z;
        }
        i ++ ;
    } while (z != -1 && i < 100);
    cout << "The total number of positive integers entered by user is " << i -1;

}
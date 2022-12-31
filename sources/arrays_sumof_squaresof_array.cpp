#include "arrays_sumof_squaresof_array.h"
#include <iostream>
using namespace std;

void arraysSumOfSquaresOfArray() {
    int userArray[10];
    int squaredArray[10];
    int sumSquaredArray = 0;

    for (int i = 0; i < 10; ++i) {
        cout << "Enter the array number " << i+1 << ": ";
        cin >> userArray[i];
    }

    cout << "\nUser Array is: [";
    for (int i: userArray)
        cout << i << "\t";

    cout << "]";

    for (int i = 0; i < 10; ++i)
        squaredArray[i] = userArray[i] * userArray[i];

    cout << "\nSquared Array is: [";
    for (int i = 0; i < 10; ++i)
        cout << squaredArray[i] << "\t";
    cout << "]";

    for (int i = 0; i < 10; ++i)
        sumSquaredArray += squaredArray[i];

    cout << "\nThe Sum of Square of Array is: " << sumSquaredArray << endl;
}

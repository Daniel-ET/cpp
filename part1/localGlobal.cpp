#include <iostream>

using namespace std;

int x = 9, y = 6;
float z;   // global - can be accessed by any function, including main

int main()
{
    int x = 3, y = 4;
    float z; // local variables will be used for calculation

    cout << "Local and Global Variables in C++ \n" << endl;

    cout << "The value of z = " << x + y << endl;

    return 0;

}

//pointers are variables that store the memory addresses of other variables.
//If we have a variable var in our program, &var will give us its address in the memory. For example,
#include <iostream>
using namespace std;

int main()
{
    // declare variables
    int var01 = 9;
    int var02 = 99;
    int var03 = 999;

    // print address of var1
    cout << "Address of var1: "<< &var1 << endl;

    // print address of var2
    cout << "Address of var2: " << &var2 << endl;

    // print address of var3
    cout << "Address of var3: " << &var3 << endl;
}
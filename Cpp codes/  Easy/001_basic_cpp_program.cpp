/*
                    -Hello World Program in CPP-
*/
#include <iostream>                    // <- This is a file that holds IO functions
using namespace std;                   // <- To skip the use of std:: for all std calls

int main()                             // <- This function is called main and it will be the first function to be called when the program runs.
{                                      // <- { signifies that a block of code has been started.
    cout << "Hello World!";            // <- To print Hello World! on the screen. cout means console out, it prints to CMD/terminal. << means output.
    return 0;                          // <- Signifies the value to return. Since main returns int value, i randomly tell it to return 0.
}                                      // <- Signifies that a block of code has ended.

/*
    To run/execute cpp codes, you will have to install a c++ compiler, search online, there are a million guides on that.
    Once it is installed and configured, run the following in cmd/terminal after navigating to your working directory:

        For windows:
            g++ <c++ program file name>.cpp
            a.exe

        For linux:
            g++ <c++ program file name>.cpp
            a.out
*/
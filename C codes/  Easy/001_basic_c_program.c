/*
                    -Hello World Program in C-
*/
#include <stdio.h>                     // <- This is a file that holds IO functions

int main()                             // <- This function is called main and it will be the first function to be called when the program runs.
{                                      // <- { signifies that a block of code has been started.
    printf("Hello World!");            // <- To print Hello World! on the cmd/terminal.
    return 0;                          // <- Signifies the value to return. Since main returns int value, i randomly tell it to return 0.
}                                      // <- Signifies that a block of code has ended.

/*
    To run/execute c codes, you will have to install a c compiler, search online, there are a million guides on that.
    Once it is installed and configured, run the following in cmd/terminal after navigating to your working directory:

        For windows:
            gcc <c program file name>.c
            a.exe

        For linux:
            gcc <c program file name>.c
            a.out
*/
#include <stdio.h>
#include <stdlib.h>

// global variables are declared outside of functions
int num = 10;

void printNum()
{
    printf("however, when we call printNum in main, since printNum is its own function, it pulls num from global %d\n", num);
}

int main()
{
    int num = 20;
    printf("In the main function, where a local num is declared, the local num overrides our global num %d\n", num);
    printNum();
    return 0;
}

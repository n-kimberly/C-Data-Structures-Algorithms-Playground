#include <stdio.h>
#include <stdlib.h>

int main() {
    // ternary conditional operator in c
    int a=10, b=20;
    int c;
    // return the lesser of the two
    c = (a>b) ? b : a;    
    printf("ans = %d ", c);
}
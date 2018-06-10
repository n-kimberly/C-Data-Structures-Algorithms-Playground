#include <stdio.h>
#include <stdlib.h>

// Main difference between 'for' & 'while' vs 'do while' loops is when the condition is checked. 'For' and 'while' loops check condition right away before execution. 'Do while' will execute before checking condition, resulting in at least one execution.

// Thus in the case where condition is not met, 'do while' loop will execute once, while other two loops will not.
int main()
{
    // Regular while loop
    // int i=0;
    int i=11;
    while(i<=10) {
        printf("Value of i = %d\n", i);
        i++;
    }

    printf("----------------------\n");

    // Do while loop
    // int j=0;
    int j=11;
    do {
        printf("Value of j = %d\n", j);
        j++;
    } while (j<=10);

    printf("----------------------\n");

    // For loop
    // for (int k=0; k<=10; k++) {
    for (int k=11; k<=10; k++) {
        printf("Value of k is %d\n", k);
    }

}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("Hello world!\n");
    printf("%d \n", 32); // integer
    printf("%ld \n", 3299999); // large integer
    printf("%f \n", 32.0); // float
    printf("%lf \n", 320000.99999); // large float
    printf("%c \n", 'a'); // single char
    printf("%s \n", "string"); // string
    printf("%x \n", 16); // hex

    // Take input from user
    printf ("Enter a number: ");
    scanf ("%d",&i);
    printf("this is your number: %d", i);

    // prints value to screen
    puts("this is my c program\n");

    return 0;
}

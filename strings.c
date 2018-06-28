#include <stdio.h>
#include <stdlib.h>

// include this header file for strings to perform additional functions with strings
// strcpy = string copy
// strcat = string concatenate
// strlen = string length
// strcmp = string compare
#include <string.h>

int main()
{
    // null terminated string
    char my_string[6] = {'H', 'i', '\0'};
    // can also initialize non-definite size array of characters
    char my_other_string[] = "Hi";

    printf("my string value is %s \n", my_string);
    printf("my other string value is %s \n", my_other_string);

    char string1[12] = "Hello";
    char string2[12] = "world";
    char string3[12];

    strcpy(string3, string1);
    printf("my string3 is %s \n", string3);

    strcat(string3, string2);
    printf("my string3 is %s \n", string3);

    int length = strlen(string3);
    printf("length of my string3 is %d", length);

    return 0;
}

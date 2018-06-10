#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks=95;
    switch(marks) {
        case 95:
            //no break statement, so advances
        case 90:
            printf("Excellent!");
            break; //optional
        case 75:
            printf("Very good!");
            break; //optional
        case 60:
            printf("Good");
            break; //optional
        case 40:
            printf("OK");
            break; //optional
        default:
            printf("Grade unavailable");
    }
}

#include <stdio.h>
#include <stdlib.h>

// passing arrays as functions
int ArraySum(int MyArray[], int size) {
    int sum = 0;
    for (int i=0; i<size; i++) {
        sum = sum + MyArray[i];
    }
    return sum;
}

int main()
{
    // one dimensional array of integers
    int MyNumberArray[3] = {60,55,80};
    int accessArray =  MyNumberArray[1];
    printf("value= %d \n", accessArray);

    // one dimensional array of characters
    char charArray[4] = {'a', 'b', 'c', 'd'};
    printf("original contents of charArray are, \n");
    for(int i=0; i<4; i++) {
        printf("%c \n", charArray[i]);
    }
    // reassignment
    charArray[0] = 'z';
    printf("new contents of charArray are, \n");
    for(int i=0; i<4; i++) {
        printf("%c \n", charArray[i]);
    }

    // two dimensional array
    int MyTwoDimArray[2][3] = {
        {1,3,2},
        {5,6,8}
    };
    for(int i=0; i<2; i++) {
        printf("row %d \n", i);
        for(int j=0; j<3; j++) {
            printf("value= %d \n", MyTwoDimArray[i][j]);
        }
    };

    // passing arrays into functions
    int arr_sum = ArraySum(MyNumberArray, 3);
    printf("arr sum= %d \n", arr_sum);
    return 0;
}

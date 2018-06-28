#include <stdio.h>
#include <stdlib.h>

// passing pointer as function argument
void getValue(int *my_pointer) {
    // takes an address and points it to this value 10000
    *my_pointer = 10000;
}

// passing array of pointers as function argument
int getSum(int *array_val, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum +=array_val[i];
    }
    return sum;
}

int main()
{
    // A pointer is a variable whose value is the address of another variable
    int val = 30;
    printf("value of val is %d \n", val);
    // Remember, memory addresses are in hexadecimal (why? Decimal is difficult because of that pesky factor of 5, and binary addresses are too long to be easily readable. Its a much shorter way to represent what would otherwise be written in binary. It is also very nice and easy to convert hex to binary and back.)
    printf("address of val = %x \n", &val);
    // To declare a pointer, use the asterisk
    int *pointer_p;
    // Assigning pointers do not require asterisk
    pointer_p = &val;
    // Here you'll see pointer value is address of val
    printf("value of pointer = %x \n", pointer_p);
    // Here you'll see address of pointer is independent of val
    printf("address of pointer = %x \n", &pointer_p);
    // Here you'll find that we can access value of val through pointer with an asterisk
    printf("value of val via pointer is %d \n", *pointer_p);

    // Now let's play with arrays
    int val_array[3] = {30, 40, 50};
    // Initialize pointer array of size 3
    int *pointer_array[3];
    // Now populate pointer array with addresses of val array
    for(int i = 0; i < 3; i++) {
        pointer_array[i] = &val_array[i];
        printf("address of array %d via &array is %x \n", i, &val_array[i]);
        printf("value of array %d via array val is %d \n", i, val_array[i]);
        printf("address of array %d via pointer val is %x \n", i, pointer_array[i]);
        printf("value of array %d via *pointer is %d \n", i, *pointer_array[i]);
    };

    // Now let's play with passing pointers as function arguments
    int gval = 0;
    printf("value of gval is %d\n", gval);
    printf("address of gval is %x\n", &gval);
    getValue(&gval);
    // Pass address value in to assign to pointer argument
    printf("value of gval is %d\n", gval);
    printf("address of gval is %x\n", &gval);


    // Now let's play with passing array of pointers as function arguments
    int my_array[4] = {10, 20, 30, 40};
    int mySum = getSum(my_array, 4);
    printf("address of my_array is %x\n", my_array);
    printf("value of getSum is %d", mySum);
}

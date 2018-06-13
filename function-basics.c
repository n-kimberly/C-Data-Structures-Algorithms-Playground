#include <stdio.h>
#include <stdlib.h>

// typical function declaration and definition
void SumVoid(int a, int b) {
    int sum = a + b;
    printf("Sum of %d and %d is equal to %d \n\n",a,b,sum);
}
// playing with forward declarations
// int means to return integer from fn
int SumInt(int a, int b);
// void means we are not returning anything
void ProductFromSumming(int a, int b);
// main is the driver function
int main(){
    int sum, a, b;

    // playing with scanfs
    printf("Please enter two numbers \n");
    printf("first number is: ");
    scanf("%d", &a);
    printf("second number is: ");
    scanf("%d", &b);

    // playing with return values from fns
    printf("Running int Sum \n");
    sum = SumInt(a, b);
    printf("%d \n\n", sum);

    // playing with a void program
    printf("Running void Sum \n");
    SumVoid(a, b);

    // playing with loops in fns
    printf("Running void Product \n");
    ProductFromSumming(a, b);
    return 0;
}
// you can define forward declared functions here
int SumInt(int a, int b) {
    int sum = a + b;
    return sum;
}
// for kicks and giggles
void ProductFromSumming(int a, int b) {
    int product = 0;
    for (int i = 1; i <= a; i++) {
        printf("self sum of %d x%d times\n", b, i);
        product += b;
    }
    printf("Product is %d \n\n", product);
}

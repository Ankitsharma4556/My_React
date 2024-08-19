#include <stdio.h>
int main() {

    int a,b;
    printf("This program will find the sum of two numbers: \n");
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("The sum of two numbers %d and %d is = %d\n",a,b,a+b);

    return 0;
}
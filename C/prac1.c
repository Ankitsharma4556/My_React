/*
Find the Smaller of Two Numbers:
Write a program to find and print the smaller of two numbers entered by the user.*/

#include <stdio.h>
int main() {
    int a,b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if (a < b)
    {
        printf("%d is the smallest number\n",a);
    }

    else if (a == b)
    {
        printf("%d %d, are both equal number\n",a,b);
    }
    
    
    else{
        printf("%d is the smallest number.\n", b);
    }

    return 0;

}
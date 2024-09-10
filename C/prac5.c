/*1. Print Multiples of a Number:
Write a program that prints the first n multiples of a number entered by the user.*/

#include <stdio.h>
int main() {
    int numb, multiples;

    printf("Enter the number: ");
    scanf("%d", &numb);

    printf("Enter the multiples: ");
    scanf("%d", &multiples);

    for (int i = 1; i <= multiples; i++)
    {
        printf("%d * %d = %d\n", numb, i, (numb*i));
    }

    return 0;
    
}
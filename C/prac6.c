/* 2. Find the Sum of Natural Numbers up to n:
Write a program to calculate the sum of all natural numbers up to a given number n.*/

#include <stdio.h>
int main() {
    int a;
    int sum = 0;

    printf("Enter your number: ");
    scanf("%d", &a);

    if (a == 0) {
        printf("Sorry 0 is not a natural  number and can't be summed");
    } else if (a > 0) {
        for (int i = 1; i <= a; i++) {
            sum += i;
    }

    printf("The sum of natural numbers up to %d is: %d\n", a, sum);
    
    }

    return 0;
}
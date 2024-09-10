/*Calculate the Average of Three Numbers:
Write a program to calculate and print the average of three numbers provided by the user.*/

#include <stdio.h>
int main() {
    float a,b,c;

    printf("Enter first num: ");
    scanf("%f", &a);

    printf("Enter second num: ");
    scanf("%f", &b);

    printf("Enter third num: ");
    scanf("%f", &c);

    printf("The average of the three entered number %.2f, %.2f, %.2f is %.2f\n", a, b, c, ((a+b+c)/3));

    return 0;
}
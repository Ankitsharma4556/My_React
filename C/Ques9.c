#include <stdio.h>
int main() {
    int a,b,c;

    printf("This program gives largest number: \n");

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("%d is the largest number\n", a);
    }
    
    else if (b > a && b > c)
    {
        printf("%d is the largest number\n", b);
    }

    else {
        printf("%d is the largest number\n",c );
    }
    
    return 0;

}

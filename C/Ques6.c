#include <stdio.h>
int main() {
    int a;

    printf("Enter your number: ");
    scanf("%d", &a);



    if (a > 0)
    {
        printf("The enter number %d is a positive number.",a);
    }
    
    else if (a < 0)
    {
        printf("The entered number %d is negative.",a);
    }

    else if (a == 0)
    {
        printf("The entered number is zero");
    }

    return 0;
    
}
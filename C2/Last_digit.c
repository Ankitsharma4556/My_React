/*Findling the last digit of a number*/
#include <stdio.h>
int main() {
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("The last digit of the number is %d", -(n%10));
    }

    else {
        printf("The last digit of the number is %d",n%10);
    }

    return 0;
    
}
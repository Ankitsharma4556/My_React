#include <stdio.h>
int main() {
    int a;
    printf("Enter your number: ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("Yes, %d is an even number.\n", a);
    }
    else {
        printf("No, %d is not an evn number but %d is an odd number.", a,a);
    }
    
    return 0;
}
#include <stdio.h>
int main() {
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("Positive\n");
    }

    else if (num < 0)
    {
        printf("Negative\n");
    }

    else {
        printf("Zero\n");
    }

    return 0;
    
}
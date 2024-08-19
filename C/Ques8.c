#include <stdio.h>
int main() {
    int a,b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Swapped A = %d\n", ((a+b)-a));
    printf("Swapped B = %d\n", ((a+b)-b));

    return 0;
}
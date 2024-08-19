#include <stdio.h>
int main() {
    int length, breadth;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);

    printf("The area of the rectangle with length %d and breadth %d is = %d\n",length, breadth,length * breadth);

    return 0;
}
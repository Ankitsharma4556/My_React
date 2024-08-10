// I will write a program to see whter entered age is eligible for voting or not.

#include<stdio.h>
int main() {
    int a;

    printf("Enter your age: ");
    scanf("%d",&a);
    if (a >= 18)
    {
        printf("Yes, you are eligible for voting\n");
    }
    else (printf("Sorry you are not eligible for voting\n"));

    return 0;
    
}
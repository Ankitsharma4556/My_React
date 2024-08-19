#include <stdio.h>
int main() {
    int principal,ROI, Time;
    printf("This program will calculate the SI");

    printf("Enter your principal amount: ");
    scanf("%d", &principal);

    printf("Enter your ROI: \n");
    scanf("%d", &ROI);

    printf("Enter the time in Months: \n");
    scanf("%d", &Time);

    printf("The SI of the given input is = %d \n", (principal * ROI * Time)/100);

    return 0;
}
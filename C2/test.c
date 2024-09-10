/*Given a day d, need to find out what was the day before n days.*/

#include<stdio.h>
int main() {
    int d,n, db;

    printf("Enter the value of currnt day: ");
    scanf("%d", &d);

    printf("Enter the value of n (days to go back): ");
    scanf("%d", &n);

    db = (d - n % 7 + 7 ) % 7;

    printf("The day before %d days was: %d\n", n, db);
    return 0;
    

}
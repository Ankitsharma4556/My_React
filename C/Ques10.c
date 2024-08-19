#include <stdio.h>
int main() {

    double n;
    double result =1;

    printf("Enter your number: ");
    scanf("%lf", &n);

  for (double temp = 1; temp <= n; temp++)
  {
     result = result * temp;
    
  }

printf("%f", result);
    return 0;

}
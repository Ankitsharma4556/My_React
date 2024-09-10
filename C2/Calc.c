#include<stdio.h>
int main() {
    int x,y, opr;
  
  printf("Enter first number: ");
  scanf("%d",&x);
  printf("Enter second number: ");
  scanf("%d",&y);
  printf("Enter the operator: ");
  scanf("%d", &opr);

switch (opr)
{
    //Addition
case 1:
    printf("%d\n",(x+y));
    break;

    //Subtraction
case 2:
    printf("%d\n",(x-y));
    break;

    //Multiplication

case 3:
    printf("%d\n",(x*y));
    break;

default:
    printf("Invalid Number entered\n");
    break;
}
return 0;


}
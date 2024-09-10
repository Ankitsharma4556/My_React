#include <stdio.h>
int main()
{
    int num;
    printf("Enter the num: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("Zero\n");
    }

    if (num % 2 == 0)
    {
        if (num < 0)

        {
            printf("Negative Even\n");
        }
        else if (num > 0)
        {
            printf("Positive Even\n");
        }
    }

    else if (num % 2 != 0)
    {
        if (num < 0)
        {
            printf("Negative Odd\n");
        }

        else if (num > 0)
        {
            printf("Positive Odd\n");
        }
    }

    return 0;
}
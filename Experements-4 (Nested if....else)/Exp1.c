#include <stdio.h>
int main()
{
    int x1;
    printf("Enter 1st number: ");
    scanf("%d", &x1);
    if (x1 % 5 == 0)
    {
        if (x1 % 3 == 0)
        {
            printf("%d is divisible by 5 & 3.", x1);
        }
        else
        {
            printf("%d is not divisible by 5 & 3.", x1);
        }
    }
    else
    {
        printf("%d is not divisible by 5 & 3.", x1);
    }
}
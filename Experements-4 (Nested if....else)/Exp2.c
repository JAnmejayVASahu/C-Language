#include <stdio.h>
int main()
{
    int n1;
    printf("\nEnter a numer ");
    scanf("%d", &n1);
    if (n1 % 5 == 0 || n1 % 3 == 0)
    {
        if (n1 % 15 != 0)
        {
            printf("\n%d is divisable by 5 or 3 but not 15.", n1);
        }
        else
        {
            printf("%d is divisible by 15", n1);
        }
    }
    else
    {
        printf("\n%d is not divisable by 5 or 3.", n1);
    }
}
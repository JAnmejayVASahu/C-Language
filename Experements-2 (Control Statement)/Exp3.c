#include <stdio.h>
int main()
{
    int n1;
    printf("Enter a Number- ");
    scanf("%d", &n1);
    if (n1 % 5 == 0)
    {
        printf("%d is divisible by 5.", n1);
    }
    else
    {
        printf("%d is not divisible by 5.", n1);
    }
}
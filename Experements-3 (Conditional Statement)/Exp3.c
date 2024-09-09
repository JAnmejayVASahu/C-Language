#include <stdio.h>
int main()
{
    int div;
    printf("Enter a Number: ");
    scanf("%d", &div);
    if (div % 5 == 0 || div % 3 == 0)
    {
        printf("%d is divisable by 5 or 3", div);
    }
    else
    {
        printf("%d is not divisable by 5 or 3", div);
    }
}
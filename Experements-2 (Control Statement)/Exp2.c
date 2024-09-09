#include <stdio.h>
int main()
{
    int x1;
    printf("Enter a number- ");
    scanf("%d", &x1);
    if (x1 % 2 == 0)
    {
        printf("%d is a Enen Number", x1);
    }
    else
    {
        printf("%d is a Odd Number", x1);
    }
}
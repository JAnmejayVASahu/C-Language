#include <stdio.h>
int main()
{
    int j;
    printf("Enter a number: ");
    scanf("%d", &j);
    int a = 3;
    for (int i = 1; i <= j; i++)
        ;
    {
        printf("%d", a);
        a = a * 4;
    }
}
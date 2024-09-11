#include <stdio.h>
int main()
{
    int j;
    printf("Enter terms: ");
    scanf("%d", &j);
    int a = 100;
    for (int i = 1; i <= j; i++)
    {
        printf("%d ", a);
        a = a / 2;
    }
}
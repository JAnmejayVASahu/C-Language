#include <stdio.h>
int main()
{
    int y;
    printf("Enter a number: ");
    scanf("%d", &y);
    int a = 1;
    for (int i = 1; i <= y; i = i + 2)
    {
        printf("%d ", a);
        a = a * 2;
    }
}
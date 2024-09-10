#include <stdio.h>
int main()
{
    int n;
    printf("Which table you want to print: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i = i + 1)
    {
        printf("%d ", i * n);
    }
}
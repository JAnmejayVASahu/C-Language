#include <stdio.h>
int main()
{
    int n;
    printf("\nEnter a number ");
    scanf("%d", &n);
    int sum = 0;
    int ld = 0; // ld = Last Digits
    while (n != 0)
    {
        ld = n % 10;
        sum = sum + ld;
        n = n / 10;
    }
    printf("\nthis is your sum of digits: %d", sum);
    return 0;
}
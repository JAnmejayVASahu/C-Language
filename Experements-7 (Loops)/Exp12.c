#include <stdio.h>
int main()
{
    int n;
    printf("Enter terms: ");
    scanf("%d", &n);
    int a = 0;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        { // i is a factor of n.
            a = 1;
            break; // break is a terminate condition.
        }
    }
    if (n == 1)
        printf("1 is nither peime nor composite.");
    if (a == 0)
    {
        printf("The given number is prime");
    }
    else
    {
        printf("The given number is composit.");
    }
}
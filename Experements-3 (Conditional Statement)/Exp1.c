#include <stdio.h>
int main()
{
    int t3; // t3 = Three digits.
    printf("Enter a Three digits Number:");
    scanf("%d", &t3);
    if (t3 <= 999 && t3 > 99)
    {
        printf("%d is a Three digits Number ", t3);
    }
    else
    {
        printf("%d is not a Three Digits Number ", t3);
    }
}
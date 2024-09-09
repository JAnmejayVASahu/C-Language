#include <stdio.h>
int main()
{
    int ab1;
    printf("Enter a Number: ");
    scanf("%d", &ab1);
    if (ab1 <= 0)
    { // if ab1 is less than or isequal to
        ab1 = ab1 * (-1);
    }
    printf("This is your absolute value: %d", ab1);
}
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    n % 2 == 0 ? printf("Even number.") : printf("Odd number."); // Ternary operater like exp1 ? exp2 : exp3 explanation -> when exp1 is true then exp2 will be print & when exp1 is false exp3 will be peint.
}
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number-");
    scanf("%d", &num);
    if (num % 2 == 0)
    { // this ihis is a if block
        printf("%d is a Even Number", num);
    }
    if (num % 2 != 0)
    { // != is repesent is not equal to
        printf("%d is a odd Number ", num);
    }
}
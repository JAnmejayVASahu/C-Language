#include <stdio.h>
int main()
{
    float num1, Result;
    printf("Enter a number:- "); 
    scanf("%f", &num1);
    int num2 = num1;
    printf("%f",num1);
    printf("\n");
    printf("%d",num2);
    Result = num1 - num2;

    printf("This is your fraction:- %f", Result);
}
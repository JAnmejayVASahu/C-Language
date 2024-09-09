#include <stdio.h>
int main()
{
    int x1, x2, x3, x4, x5, x6;
    printf("Enter your M.I.L's mark:- ");
    scanf("%d", &x1);
    printf("Enter your English's mark:- ");
    scanf("%d", &x2);
    printf("Enter your Mathematics's mark:- ");
    scanf("%d", &x3);
    printf("Enter your Voctional's mark:- ");
    scanf("%d", &x4);
    printf("Enter your Physics's mark:- ");
    scanf("%d", &x5);
    printf("Enter your Chemistry's mark:- ");
    scanf("%d", &x6);
    float per = (((x1 + x2 + x3 + x4 + x5 + x6) * 100) / 600);
    printf("This is your persentage:- %f", per);
}
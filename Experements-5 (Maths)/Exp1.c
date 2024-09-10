#include <stdio.h>
int main()
{
    int x1, y1;
    int x2, y2;
    int x3, y3;
    printf("Enter cordenet number x1: ");
    scanf("%d", &x1);
    printf("\nEnter 1st cordenet number y1: ");
    scanf("%d", &y1);
    printf("\nThis is your Cordinate point(%d, %d)", x1, y1);
    printf("\nEnter cordenet number x2: ");
    scanf("%d", &x2);
    printf("\nEnter cordenet number y2: ");
    scanf("%d", &y2);
    printf("\nThis is your 1st Cordinate point(%d, %d)", x2, y2);
    printf("\nEnter cordenet number x3: ");
    scanf("%d", &x3);
    printf("\nEnter cordenet number y3: ");
    scanf("%d", &y3);
    printf("\nThis is your 1st Cordinate point(%d, %d)", x3, y3);
    float m1 = (y2 - y1) / (x2 - x1);
    printf("\nThis is your slope1 %f ", m1);
    float m2 = (y3 - y2) / (x3 - x2);
    printf("\nThis is your slope2 %f ", m2);
    if (m1 == m2)
    {
        printf("\nYes,all point are fall on a stright line");
    }
    else
    {
        printf("\nNo,all point are not fall on a stright line.");
    }
}
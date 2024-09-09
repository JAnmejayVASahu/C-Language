#include <stdio.h>
int main()
{
    int p, q, r;
    printf("\nEnter a side1 of tringle: ");
    scanf("%d", &p);
    printf("\nEnter a side2 of tringle: ");
    scanf("%d", &q);
    printf("\nEnter a side3 of tringle: ");
    scanf("%d", &r);
    if (p + q > r && q + r > p && r + p > q)
    {
        printf("\nYes those %d, %d, %d are creat a tringle.", p, q, r);
    }
    else
    {
        printf("\nThose %d, %d, %d are not creat any tringle.", p, q, r);
    }
}
#include <stdio.h>
int main()
{
    int n1; // n1 = Number1
    printf("\nEnter Number 1;-");
    scanf("%d", &n1);
    int n2; // n1 = Number1
    printf("\nEnter Number 2;-");
    scanf("%d", &n2);
    int n3; // n1 = Number1
    printf("\nEnter Number 3;-");
    scanf("%d", &n3);
    if (n1 > n2 && n1 > n3)
    {
        printf("The %d is greatest among them.", n1);
    }
    if (n2 > n1 && n2 > n3)
    {
        printf("The %d is greatest among them.", n2);
    }
    if (n3 > n1 && n3 > n2)
    {
        printf("The %d is greatest among them.", n3);
    }
    if (n2 == n1 && n2 == n3)
    {
        printf("The %d, %d, %d are same.", n1, n2, n3);
    }
}
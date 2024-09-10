#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the Cordinate number: ");
    scanf("%d %d", &x, &y);
    if (y == 0 && x == 0)
    {
        printf("%d %d this lie on the origin.", x, y);
    }
    else if (y == 0)
    {
        printf("%d %d is lie on the x-axis.", x, y);
    }
    else if (x == 0)
    {
        printf("%d %d is lie on the y-axis.", x, y);
    }
    else
    {
        printf("%d %d are lie in y-axis or any other cordnet.", x, y);
    }
}
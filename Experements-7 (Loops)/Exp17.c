#include <stdio.h>
int main()
{
    int j = 1;
    while (j <= 10)
        ;
    {
        printf("\n%d", j); // gcc means garvage value.
        j++;
    }
}
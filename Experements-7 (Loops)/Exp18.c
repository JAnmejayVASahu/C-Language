#include <stdio.h>
int main()
{
    int x = 1;
    while (x == 1)
    {
        x = x - 1;
        printf("\nThis is your answer %d", x); // gcc means garvage value.
    }
}
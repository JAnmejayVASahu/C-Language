#include <stdio.h>
int main()
{
    int x = 4, y, z;
    y = --x;
    z = x--;
    printf("\n This is your answer %d %d %d", x, y, z);
}
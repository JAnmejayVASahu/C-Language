#include <stdio.h>
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            continue; // skip this round of loop.
        }
        printf("%d ", i);
    }
}
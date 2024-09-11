#include <stdio.h>
int main()
{
    int i = 1;
    while (i < 100)
    { // only write the condition and gate the output.
        printf("%d, ", i);
        i++;
    }
}
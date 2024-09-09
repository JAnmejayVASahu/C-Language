#include <stdio.h>
int main()
{
    float lg; // lg = Length.
    printf("Enter length: ");
    scanf("%f", &lg);
    float bt; // bt = breath
    printf("\nEnter breath: ");
    scanf("%f", &bt);
    float ar = (lg * bt);
    printf("\nThis is your area %f ", ar);
    float pt = 2 * (lg + bt);
    printf("\nThis is your Parameter %f ", pt);
    if (ar < pt)
    {
        printf("\nArea is less than from Parameter");
    }
    else
    {
        printf("\nArea is greater than from Parameter");
    }
}
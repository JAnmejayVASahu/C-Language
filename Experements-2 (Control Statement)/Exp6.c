#include <stdio.h>
int main()
{
    int cp; // sp = selling price, cp = Cost price
    printf("Enter your Cost Price: ");
    scanf("%d", &cp);
    int sp;
    printf("Enter your Selling Price: ");
    scanf("%d", &sp);
    int gn = sp - cp; // gn = gain
    int ls = cp - sp; // ls = loss
    if (cp < sp)
    {
        printf("%d Profit.", gn);
    }
    if (cp > sp)
    {
        printf("%d is your loss.", ls);
    }
    if (cp == sp)
    {
        printf("No profit & no loss. ");
    }
}
#include<stdio.h>
int main() {
    int x1, x2;// always remember x1 > x2
    printf("Enter 1st number- ");
    scanf("%d",&x1);
    printf("Enter 2nd number- ");
    scanf("%d",&x2);
    int rem = (x1 % x2);//Other wise you can find out the reminder through using diviser formula.
    printf("This is your reminder %d of %d & %d",rem,x1,x2);
}
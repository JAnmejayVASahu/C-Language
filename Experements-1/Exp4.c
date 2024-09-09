#include<stdio.h>
int main(){
    int x;
    int y;
    int z;
    x = 50;
    y = 23;
    printf("\n1. The addition of x and y is-%d",x+y);
    printf("\n2. The multiplication of x and y is-%d",x*y);
    printf("\n3. The division of x and y is-%d",x/y);// Mark here compilear don't print the flot/decimal number like 1.2. 
    printf("\n4. The substraction of x and y is-%d",x-y);    
    printf("\n5. The reminder of x and y is-%d",x%y);
    x = 20;
    y = 10;
    z = x + y;
    printf("\n7. The value of z is-%d",z);
    z = x - y;
    printf("\n8. The value of z is-%d",z);
    z = x * y;
    printf("\n9. The value of z is-%d",z);
    z = x / y;
    printf("\n10. The value of z is-%d",z);
    z = x % y;
    printf("\n11. The value of z is-%d",z);
}
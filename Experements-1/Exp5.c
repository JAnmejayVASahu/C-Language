#include <stdio.h>
int main()
{
    float x = 20.0;
    float z = 30; // Mark here "z" is a floating variable but you store a integer value there is no problame
    int y = 10;
    int a = 20.0;                                     // Mark here "a" intege variablee but you sotred float value so when you want to use this will be show in integer vale.
                                                      // integer with float or float with integer
    printf("\n1. The value of adition is-%d", x + y); // Mark here when you enter %d the compiler output wrong answer.
    printf("\n2. The value of adition is-%f", x + y); //%f for floating value.
    printf("\n3. The value of adition is-%f", x - y);
    printf("\n4. The value of adition is-%f", x * y);
    printf("\n5. The value of adition is-%f", x / y);
    // int with integer
    printf("\n\nThe value of adition is-%f", y + a);
    printf("\nThe value of adition is-%f", y - y);
    printf("\nThe value of adition is-%f", a * y);
    printf("\nThe value of adition is-%f", a / y);
    // float with float
    printf("\n\nThe value of adition is-%f", x + z);
    printf("\nThe value of adition is-%f", x - z);
    printf("\nThe value of adition is-%f", z * x);
    printf("\nThe value of adition is-%f", z / x);
}
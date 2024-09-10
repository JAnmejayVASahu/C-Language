// 42. For Loops(using normal caode find the output Hello janmejay 10 times & try this  code with For loops.)
#include <stdio.h>
int main()
{
    printf("\n1.Hello, Janmejay");
    printf("\n2.Hello, Janmejay");
    printf("\n3.Hello, Janmejay");
    printf("\n4.Hello, Janmejay");
    printf("\n5.Hello, Janmejay");
    printf("\n6.Hello, Janmejay");
    printf("\n7.Hello, Janmejay");
    printf("\n8.Hello, Janmejay");
    printf("\n9.Hello, Janmejay");
    printf("\n10.Hello, Janmejay");
    printf("\n \n  Below are in loops from.");
    for (int i = 1; i <= 10; i++)
    { // inilitazation(int i=1),Condition(i<5),updatation(i++),A short trick (i=i+1) = (i++).
        printf("\n\nHello Janmejay");
        for (int i = 1; i <= 10; i = i + 2)
        {
            printf("\n\nHello Janmejay");
        }
        return 0;
    }
}
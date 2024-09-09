#include<stdio.h>
int main(){
    float radius;
    printf("Enter radius of circle:-");// Without this ptintf statement run this code & see what is the benifit of this statement.
    scanf("%f",&radius);// scanf:- use for taking input from user the other thing is here "&" symbol represent the address of this variable.
    float pai = 3.14;
    float area = (pai*radius*radius);
    printf("The are of the circle is- %f",area);
}
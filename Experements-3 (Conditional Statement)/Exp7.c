#include<stdio.h>
int main(){
    int a1, a2, a3;//a1=Ram, a2=Shyam, a3=Ajay
    printf("\nEnter Ram's age: ");
    scanf("%d",&a1);
    printf("\nEnter Shyam's age: ");
    scanf("%d",&a2);
    printf("\nEnter Ajay's age: ");
    scanf("%d",&a3);
    if(a1>a2 && a1>a3){
        printf("\nRam is %d years old so he is youngest of them.",a1);
    }
    if(a2>a1 && a2>a3){
        printf("\nShyam is %d years old so he is youngest of them.",a2);
    }
   if(a3>a2 && a3>a2){
        printf("\nAjay is %d years old so he is youngest of them.",a3);
    }
}
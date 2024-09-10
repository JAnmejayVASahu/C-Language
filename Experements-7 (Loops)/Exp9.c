#include<stdio.h>
int main(){
    int y;
    printf("Enter a number: ");
    scanf("%d",&y);
    for(int i=4; i<=(3*y)+1; i=i+3){
        printf("%d, ", i);
    }
}
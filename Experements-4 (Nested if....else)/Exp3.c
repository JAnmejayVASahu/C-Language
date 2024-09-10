#include<stdio.h>
int main(){
    int per;
    printf("Enter your percentage: ");
    scanf("%d",&per);
    if(per > 90){
        printf("Excellent.");
    }
    else if(per > 80){
        printf("Very good.");
    }
    else if(per > 70){
        printf("Good.");
    }
    else if(per > 60){
        printf("Can do better.");
    }
    else if(per > 50){
        printf("Average.");
    }
    else if(per > 40){
        printf("Below Average.");
    }
    else{
        printf("Fail.");
    }
}
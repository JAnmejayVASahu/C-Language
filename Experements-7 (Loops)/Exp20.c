// #include<stdio.h>
// int main(){
//     int x = 4, y=3, z;
//     z = x-- -y;
//     printf("\n This is your answer %d %d %d", x, y, z);
// }

// See the different between --x, x--
#include<stdio.h>
int main(){
    int x = 4, y=3, z;
    z = --x -y;
    printf("\n This is your answer %d %d %d", x, y, z);
}
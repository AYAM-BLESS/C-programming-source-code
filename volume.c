//done by ayamba bless on the 08/02/2022

#include<stdio.h>
int main(){
    int l, w, h, v;
    printf("Enter the lenght:",l);
    scanf("%d", &l);
    printf("Enter the value of the width:",w);
    scanf("%d", &w);
    printf("Enter the value of the height:",h);
    scanf("%d",&h);
    v = l * w * h;
    printf("Volume of the cube is = %d",v);
    return 0;
}
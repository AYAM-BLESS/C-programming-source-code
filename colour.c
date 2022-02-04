#include<stdio.h>
int main(){
    int colour = 0;
    switch (colour) {
        case 0:
        printf("Black\n");
        case 1:
        printf("red\n");
        case 2:
        printf("Aqua\n");
        break;
        case 3:
        printf("Green\n");
        default:
        printf("Other\n");
    }
    return 0;
}
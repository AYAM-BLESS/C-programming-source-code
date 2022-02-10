// done by ayamba bless on the 10/02/2022

#include<stdio.h>
#include<conio.h>
int main(){
    int i, r, n;
    printf("Enter a number of table:");
    scanf("%d", &n);
    for(i=1; i<=10; i++){
        r = n*i;
        printf("%dx%d = %d\n", i,r,n);
    }
    return 0;
}
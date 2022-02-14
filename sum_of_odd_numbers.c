// done by ayamba bless on the 13/02/2022


#include<stdio.h>
int main(){
    int i, n, sum;
    printf("1+3+5+...+n Enter N\n");
    scanf("%d", &n);
    for(i=1; i<=n; i=i+2){
        sum = sum + i;
    }
    printf("sum=%d", sum);
    return 0;
}
#include<stdio.h>
int main(){
    int intv = 20000;
    intv = ((long)intv * 10)/20;
    printf("\n intv = %d", intv);
    return 0;
}
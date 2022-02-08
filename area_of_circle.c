//done by ayamba bless on the 08/02/2022

#include<stdio.h>
#define PI 3.142
int main(){
    float r, a;
    printf("Enter the radius: \n",r);
    scanf("%f", &r);
    a = PI * r * r;
    printf("Area of circle is = %.2f",a);
    return 0;
}
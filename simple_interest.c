// done by ayamba bless

#include<stdio.h.>
int main(){
    float i, p, r, t;
    printf("enter the value of p:\n");
    scanf("%f", &p);
    printf("enter the value of r:\n");
    scanf("%f", &r);
    printf("enter the value of t:\n");
    scanf("%f",&t);
    i = (p*r*t)/100;
    printf("interest = %.0f", i);
    return 0;
}

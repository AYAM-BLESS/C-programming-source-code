//done by ayamba bless

#include<stdio.h>
void cube(int);
int main(){
    int a = 2;
    cube(a);
    printf("\n a = %d", a);
    return 0;
   
}
 
        void cube( int x){
            x = x*x*x;
            printf("\n x = %d", x);
    }
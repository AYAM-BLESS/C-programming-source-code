# include<stdio.h>
int main(){
    void display(int n){
        printf("%d\n", n);
        if(n>0)
        display(n-1);
    }
    display(10);
    return 0;
}
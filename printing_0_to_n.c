# include<stdio.h>
int main(){
    void display(int n){
        if(n>0){
        display(n-1);
        printf("%d\n", n);
        }
    }
    display(10);
    return 0;
}
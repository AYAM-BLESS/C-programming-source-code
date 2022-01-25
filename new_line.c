#include<stdio.h>
int main(){
    int c;
    while((c=getchar()) !=EOF){
        if(c==' ' ||c=='\t' ||c=='\n')
        putchar('\n');
        //flush the output!!!
        else
        //store the output
        putchar(c);
    }
}
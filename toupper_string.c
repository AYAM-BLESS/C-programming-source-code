
// done by ayamba bless on 30/01/2022

#include<stdio.h>
#include<ctype.h>
int main(){
    int i;
    char str[] = "iloveprogramming";
    char c;
    while(str[i]){
        c = str[i];
        putchar(toupper(c));
        i++;
    }
    return 0;
}
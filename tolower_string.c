#include<stdio.h>
#include<ctype.h>
int main(){
    int i = 0;
    char str[] = "AYAMBABLESS\n";
    char c;
    while(str[i]){
        c = str[i];
        putchar(tolower(c));
        i++;
    }
    return 0;
}
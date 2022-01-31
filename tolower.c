#include<stdio.h>
#include<ctype.h>

int main(){
    char c;
    c = 'G';
    printf("%c in lowercase is represented as %c",
    c, tolower(c));
    return 0;
}
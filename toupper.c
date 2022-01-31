#include<stdio.h>
#include<ctype.h>
int main(){
    char c;
    c = 'd';
    printf("%c in uppercase is %c", c,
    toupper(c));
    return 0;
}
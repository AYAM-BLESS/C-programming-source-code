#include<stdio.h>
#include<ctype.h>
int main(){
    int i = 0;
    char str;
    char c;
    printf("Enter the string:\n", str);
    scanf("%c", &a);
    while(str[i]){
        c = str[i];
        putchar(tolower(c));
        i++;
    }
    return 0;
}
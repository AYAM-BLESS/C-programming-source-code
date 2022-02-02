// done by ayamba bless on 01/02/2022

#include<stdio.h>
int main(){
    int i;
    char str[100], c;
    int count = 0;
    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find its frequency:");
    scanf("%c", &c);

    for(i = 0; str[i] != '\0'; ++i){
        if (c == str[i])
        ++count;
    }
    printf("Frequency of %c = %d", c, count);
    return 0;
}
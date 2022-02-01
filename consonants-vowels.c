// done by ayamba bless on 31/01/2022

#include<stdio.h>
#include<ctype.h>
int main(){
    char c;
    int lowercase_vowel, uppercase_vowel;
     printf("Enter an alphabet:");
    scanf("%c", &c);

    //evaluates to true if c is a lowercase_vowel
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    //evaluates to true if c is an uppercase_vowel
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    //evaluates to true if c is a vowel

    if(lowercase_vowel || uppercase_vowel)
    printf("%c is a vowel.", c);

    else
    printf("%c is a consonant.", c);
    return 0;
}
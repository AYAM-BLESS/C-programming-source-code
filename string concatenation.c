//done by Ayamba bless
#include <stdio.h>
#include<string.h>
int main()
{
char str1[100], str2[100];
printf("First String: \n"); gets(str1);
printf("Second String: \n"); gets(str2);
strcat(str1,str2);
printf("Concatenation of both string is %s\n", str1);
return 0;
}
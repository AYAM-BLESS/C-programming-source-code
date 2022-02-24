//done by ayamba bless
//what is the output of the code below


#include<stdio.h>
int main()
{
    int i = 2, j = 3;
    {
        int i = 4, j = 5;
        printf("%d%d", i, j);
    }
    printf("%d%d", i, j);
    return 0;
}
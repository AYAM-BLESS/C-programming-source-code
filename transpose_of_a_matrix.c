//done by ayamba bless

#include<stdio.h>
int main(){
    int a[2][3];
    int i, j;
    printf("Enter value :");
    for(i=0; i<3; i++)
    {
      for(j=0; j<3; j++)
    {
        scanf("%d", &a[i][j]);
    }
    }
    printf("\n The matrix is = \n");
    for(i=0; i<3; i++)
    {
       for(j=0; j<3; j++)
    {
        printf("%d      ", a[i][j]);
    }
    printf("\n");
    }
    printf("Transpose of a matrix\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%0d\n", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}

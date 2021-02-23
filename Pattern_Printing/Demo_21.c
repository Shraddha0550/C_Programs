#include<stdio.h>
int main()
{
    int row = 0, col = 0,i = 0, j = 0;

    printf("Enter two numbers\n");
    scanf("%d%d",&row,&col);

    for(i = row ; i >= 1; i--)
    {
        for(j= 1; j <=i  ; j++)
        {
           printf("\t%c",i+64);

        }
        printf("\n");
    }

    return 0;
}

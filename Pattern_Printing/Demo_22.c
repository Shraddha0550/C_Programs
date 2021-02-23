#include<stdio.h>
int main()
{
    int row = 0, col = 0,i = 0, j = 0;

    printf("Enter two numbers\n");
    scanf("%d%d",&row,&col);

    for(i = 1 ; i <= row; i++)
    {
        for(j= col; j >=i  ; j--)
        {
           printf("\t%c",j+64);

        }
        printf("\n");
    }

    return 0;
}

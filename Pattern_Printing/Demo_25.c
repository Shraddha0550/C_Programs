#include<stdio.h>
int main()
{
    int row = 0, col = 0,i = 0, j = 0;

    printf("Enter Two Numbers\n");
    scanf("%d%d",&row,&col);

    for(i = 1 ; i <= row; i++)
    {
        for(j= 1; j <= col  ; j++)
        {
                if(i == row|| j == col || i == 4 && j >b1 || i ==  3 && j > 2 || i == 2 && j > 3)
                {
                     printf("\t%c",i+64);
                }
                else
                {
                    printf("\t ");
                }
        }
        printf("\n");
    }

    return 0;
}

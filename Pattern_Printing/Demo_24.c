#include<stdio.h>
int main()
{
    int row = 0, col = 0,i = 0, j = 0;

    printf("Enter two numbers\n");
    scanf("%d%d",&row,&col);

    for(i = 0 ; i < row; i++)
    {
        for(j= 1; j <=col  ; j++)
        {
                if(i==row|| j== col || i==4 && j >1 || i==3 && j >2 || i==2 && j >3)
                {
                     printf("\t%d",i);
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

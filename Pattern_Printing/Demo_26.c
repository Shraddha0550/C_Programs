#include<stdio.h>
int main()
{
    int row = 0, col = 0,i = 0, j = 0;

    printf("Enter two numbers\n");
    scanf("%d%d",&row,&col);

    for(i = 1 ; i <= row; i++)
    {
        for(j= 1; j <=col  ; j++)
        {
                if(i==row|| j==(col/2)+1 || i+j == 6 )
                {
                     printf("\t*");
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

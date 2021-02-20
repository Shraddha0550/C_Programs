#include<stdio.h>
int main()
{
    int row = 0, col = 0,i = 0, j = 0;

    printf("Enter two numbers\n");
    scanf("%d%d",&row,&col);

    for(i = 1 ; i <= row ; i++)
    {
        for(j= 1; j <= col ; j++)
        {
            if( i == 1 || j == 1 || i+j==6 || i==2 && j<5 || i==3 && j<4 )
            {
                printf("\t%d",j);
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

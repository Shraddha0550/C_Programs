#include<stdio.h>
int main()
{
    int row = 0, col = 0,i = 0, j = 0;

    printf("Enter two numbers\n");
    scanf("%d%d",&row,&col);

    for(i = 0 ; i < row ; i++)
    {
        for(j= 0; j < col ; j++)
        {
            printf(" %c",i+65);
        }
        printf("\n");
    }

    return 0;
}

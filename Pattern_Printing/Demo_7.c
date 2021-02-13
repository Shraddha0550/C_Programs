#include<stdio.h>
int main()
{
    int row = 0, col = 0,i = 0, j = 0;

    printf("Enter two numbers\n");
    scanf("%d%d",&row,&col);

    for(i = row ; i >= 0 ; i--)
    {
        for(j= col; j >= 0 ; j--)
        {
            printf(" %c",i+65);
        }
        printf("\n");
    }

    return 0;
}

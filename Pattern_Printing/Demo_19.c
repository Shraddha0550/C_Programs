#include<stdio.h>
int main()
{
    int row = 0, col = 0,i = 0, j = 0;

    printf("Enter Two Numbers\n");
    scanf("%d%d",&row,&col);

    for(i = row ; i >= 1; i--)
    {
        for(j = 1; j <=i  ; j++)
        {
           printf("\t%d",i);

        }
        printf("\n");
    }

    return 0;
}

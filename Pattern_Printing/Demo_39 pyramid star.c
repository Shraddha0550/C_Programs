#include<stdio.h>

int main()
{
    int i = 0,j = 0,k=0,No = 0;

    printf("Enter a Number:\n");
    scanf("%d",&No);

    for(i= 1;i <= No ;i++)
    {
        for(j=i;j<No;j++)
        {
             printf("  ");
        }
         for(j= 1;j <=2*i-1 ;j++)
         {
            printf(" *");
         }
         printf("\n");
    }
    return 0;
}

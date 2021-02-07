#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,No=0;
    printf("==============================\n\n");
    printf("*******pattern printing********\n\n\n");
    printf("enter number:\n");
    scanf("%d",&No);
    for(i=1;i<=No;i++)
    {
        for(j=1;j<=No;j++)
        {
            if(j==1||j==No||i==(No/2)+1)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("===============================\n");
    getch();
    return 0;
}

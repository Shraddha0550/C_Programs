#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0 , j = 0 , No = 0 ;
    printf("==============================\n\n");
    printf("*******pattern printing********\n\n");
    printf("Enter Any Number:\n");
    scanf("%d",&No);

    for(i = 1 ; i <= No ; i++)
    {
        for(j = 1 ; j <= No ; j++)
        {
            printf("\t*");
        }
        printf("\n");
    }
    printf("===============================\n");
    getch();
}

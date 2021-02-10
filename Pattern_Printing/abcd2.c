#include<stdio.h>
#include<conio.h>
int main()
{
     int i = 0 , j = 0,No = 0;
    char ch = 'A';

    printf("==============================\n\n");
    printf("*******pattern printing********\n\n\n");
    printf("Enter Number:\n");
    scanf("%d",&No);

    for(i = 1 ; i <= No ; i++)
    {
        for(j = 1 ; j <= i ; j++)
        {
            printf("%c",ch);
            ch++;
        }
        ch = 'A';
        printf("\n");
    }

    printf("===============================\n");
    getch();
    return 0;
}

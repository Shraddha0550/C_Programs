#include<stdio.h>
#include<conio.h>
int main()
{
    int Num[5],sum=0,i=0,avg=0;

    for(i=0;i<5;i++)
    {
        printf("Enter a number\n");
        scanf("%d",&Num[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",Num[i]);
        sum=sum+Num[i];
    }
    avg=sum/5;

    printf("Average is=%d",avg);

    getch();
    return 0;
}

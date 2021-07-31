#include<stdio.h>
#include<conio.h>
int main()
{
    float percentage[10];
    int i = 0;

    for(i = 0 ; i < 10 ; i++)
    {
        printf("Enter Percentage of  %d Student\n",i+1);
        scanf("%f",&percentage[i]);

    }

    for(i = 0 ; i < 10 ; i++)
    {
        printf("Enter Percentage of Student%d=%2.2f\n",i+1,percentage[i]);

    }
    return 0;
    getch();

}

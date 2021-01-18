#include<stdio.h>

int Sum(int Cnt)
{
     static int Total = 0, i = 0 ;
     int Num = 0;

    while(i < Cnt)
    {

        printf("Enter %d Number:" ,++i);
        scanf("%d",&Num);

        Total = Sum(Cnt) + Num;

    }

    return Total;
}
int main()
{
    int iNo = 0 ;
    static int Cnt = 0;

    printf("Enter Count ");
    scanf("%d",&Cnt);

    printf(" Sum Of Inputted Number Is = %d",Sum(Cnt));

    return 0;
}

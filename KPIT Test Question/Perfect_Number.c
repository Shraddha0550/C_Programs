#include<stdio.h>
#include<conio.h>

int Is_Perfect(int No)
{
    int i = 0 , sum = 0 ;

    for(i = 1 ;i < No ; i++)
    {
        if(No % i == 0)
        {
            sum += i;
        }
    }

    printf("\n\t Output Is :");
    if(sum == No)
    {
        printf("1");
    }
    else
    {
       printf("0");
    }

}
int main()
{
    int iNo=0;

    printf("\n\t Enter a Number ==> ");
    scanf("%d", &iNo);

    Is_Perfect(iNo);

    _getch();
    return 0;

}

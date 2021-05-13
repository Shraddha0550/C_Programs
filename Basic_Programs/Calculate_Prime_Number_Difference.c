#include<stdio.h>
#include<conio.h>

int Diff_Prime_In_Range(int No1 , int No2)
{
    int i = 0 , cnt = 0 , first = 0 , Last = 0;

    printf("\n\t List Is:\t");

    for(i = No1 ;i <= No2 ; i++)
    {
       if(is_Prime(i))
       {
           printf("%d\t",i);

           if(cnt == 0)
           {
               first = i;
           }
           Last = i;
           cnt++;

       }

    }

    printf(" \n\n\t Output %d :",Last - first);

}
int is_Prime(No)
{
    int i = 0;
    for(i = 2; i < No; i++)
    {
        if(No % i == 0)
        {
            break;
        }
    }

    if(No == i)
    {
        return 1;
    }
    else
    {
       return 0;
    }

}
int main()
{
    int iN1 =0 , iN2 = 0;

    printf("\n\t Enter First Number ==> ");
    scanf("%d", &iN1);

    printf("\n\t Enter Second Number ==> ");
    scanf("%d", &iN2);

    Diff_Prime_In_Range(iN1 , iN2);

    _getch();
    return 0;

}

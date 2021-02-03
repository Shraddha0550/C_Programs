#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0,i = 0;
    printf("\t***********Prime Number**********\n");
    printf("\n==================================\n");
    printf("\n Enter Given Number\n");
    scanf("%d",&i);

    for(i=2;i<=No;i++)
    {
         if(No%i==0)
        {
            break;
        }
    }
    if(No == i )
    {
        printf("\n Given Number Is Prime");
    }
    else
    {
        printf("\n Given number Is Not Prime");
    }
    printf("\n====================================\n");
    return 0;
}

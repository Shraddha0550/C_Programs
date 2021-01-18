#include<stdio.h>

int Power(int iNo1 , int iNo2)
{
    int pow=1;

     if(iNo2==0)
    {
        pow==1;
    }
    if(iNo2==1)
    {
        pow==iNo1;
    }

    if(  iNo2 != 0 )
    {

        return  iNo1 * Power(iNo1,iNo2-1) ;

    }
    return 1;
}
int main()
{

    int iNo1=0,iNo2=0, res = 0;

    printf("\n enter two numbers=\n");
    scanf("%d%d",&iNo1,&iNo2);

    res = Power(iNo1,iNo2);

    printf("\n  %d raised to power %d =%d ", iNo1,iNo2,res);

    getch();

}

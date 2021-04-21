#include<stdio.h>
#include<math.h>
int main()
{
    int No = 0,rem = 0,cnt = 0,res = 0;

    printf("Enter The Binary Number:");
    scanf("%d",&No);

    while(No != 0)
    {
        rem = No % 10;
        res += rem *pow(2,cnt);
        No = No /10;
        cnt++;
    }

    printf(" The Conversion Of Binary To Decimal Number:%d",res);

    getchar();
    
    Return 0;
}

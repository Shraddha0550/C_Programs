#include<stdio.h>
#include<stdlib.h>

int main()
{
        int a[10],n=0,i=0,rem = 0,p = 0,rev = 0;
        system ("cls");

        printf("Enter the Decimal number to convert Binary : ");
        scanf("%d",&n);

        while(n != 0)
        {
            p = n % 8;
            rev = rev * 10 + p;
            n = n / 8;
        }
        printf("%d",rev);

        getchar();

        return 0;
}


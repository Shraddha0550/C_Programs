#include<stdio.h>
int main()
{
    int No = 21;
    const int  *ptr = &No;

    int Num = 10;

    No = 17;
    printf("\n value is=%d",No);

    printf("\n value is=%d",ptr);

    ptr = &Num;

    printf("\n value is=%d",ptr);
     printf("\n value is=%d",*ptr);

    No++;
    printf("\n value is=%d",No);

    return 0;
}

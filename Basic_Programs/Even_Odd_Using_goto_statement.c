#include<stdio.h>
#include<conio.h>
int main()
{
    int No;
    up:
    printf("Enter Any Numbers\n");
    scanf("%d",&No);
    if(No<2)
    {
        printf("Invalid no.\n");
        goto up;
    }
    if(No%2==0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }
    return 0;
}

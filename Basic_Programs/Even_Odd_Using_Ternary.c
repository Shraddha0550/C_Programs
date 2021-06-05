#include<stdio.h>
#include<conio.h>
void main()
{
    int no;
    printf("\n===========even or odd number============\n");
    printf("enter a numbers\n");
    scanf("%d",&no);
    (no%2==0)?printf("no is even\n",no):printf("no is odd\n",no);
    printf("\n==================================");
    getch();

}

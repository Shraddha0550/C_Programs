#include<stdio.h>
#include<conio.h>

int Fibbonacci_Series(int j)
{
    if(j == 0 || j == 1)
    {
        return j;
    }
    else
    {
        return(Fibbonacci_Series(j-1) + Fibbonacci_Series(j-2));
    }

}
int main()
{
     int N = 0 , i = 0 , j = 0;

    printf("\n fibbonacci series is:\n");
    scanf("%d",&N);

    for(i=0;i< N;i++)
    {
        printf("%d\t",Fibbonacci_Series(j));
        j++;


    }
    return 0;
}

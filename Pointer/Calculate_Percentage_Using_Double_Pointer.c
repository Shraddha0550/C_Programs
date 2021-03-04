#include<stdio.h>
#include<stdlib.h>

float Calc_Total(int *iTotal ,int **iptr)
{
    int i = 0 ;
    float per = 0.0;
    for(i = 0; i < 3 ; i++)
    {

         *iTotal = *iTotal + (*iptr)[i];

    }
    per = *iTotal * 100 / 300;

    return per;
}
int main()
{

    int i = 0 ,Total = 0;
    float per = 0.0;

    int *ptr = NULL;

    ptr = (int*)malloc(sizeof(int)*3);

    for(i = 0;i < 3 ; i++)
    {
        printf("\n Enter %d Subject Marks : ",i+1);
        scanf("%d",&ptr[i]);

    }

     per = Calc_Total(&Total ,&ptr);

     printf("\n ==========******==========\n ");

     printf("\n Total Marks = %d",Total);
     printf("\n Percentage = %.2f",per);

    free(ptr);
    _getch();
    return 0;
}





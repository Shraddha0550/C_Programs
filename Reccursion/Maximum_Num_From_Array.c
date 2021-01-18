#include<stdio.h>
#define Size 5

int Find_Max_No(int arr[])
{
     static int Max = 0 , i= 0 ;

    if( i < Size )
    {
         if( i == 0)
        {
            Max = arr[i];
        }
        if( Max <  arr[i])
        {
           Max = arr[i];
        }
        i++;

         Find_Max_No( arr);
    }

  return Max;
}
int main()
{
    int i = 0 , arr[Size] , MAX = 0;

    for(i = 0 ; i < Size ; i++)
    {
        printf("Enter %d Array index Element",i);
        scanf("%d",&arr[i]);
    }

    MAX = Find_Max_No(arr);

    printf("\n\n Maximum Number is = %d",MAX);
    return 0;
}

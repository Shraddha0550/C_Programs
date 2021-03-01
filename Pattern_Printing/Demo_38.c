#include<stdio.h>

int main()
{
    int i = 0,j = 0,k=0,No = 0;

    printf("Enter a Number:\n");
    scanf("%d",&No);

    for(i= 1;i <= No ;i++)
    {

         for(j= 1;j <= No ;j++)
         {
              if(i+j >= No+1)
             {
                if(j==No || i == No || i+j== No+1)
                {
                     printf(" *");
                }
                else
                {
                    printf("  ");
                }

             }
             else
             {
                 printf("  ");
             }

         }
         printf("\n");
    }
    return 0;
}

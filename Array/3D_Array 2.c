#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;

    int arr[3][3][3];

     printf("\t\t....3D matrix is:....\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("Enter a number\n");
                scanf(" %d",&arr[i][j][k]);
            }
             printf("\n");
        }
         printf("\n");
    }
    printf("....matrix is.....\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                printf(" %d",arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;


}

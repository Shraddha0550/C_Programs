#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;

    int arr[2][2]= {    {1,2},
                        {4,5}
                   };
     printf("\t\t....2D matrix is:....\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf(" %d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
    getch();

}

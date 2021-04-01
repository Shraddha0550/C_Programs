#include<stdio.h>
int main()
{
    int r = 3 , c = 4 ,i = 0,j = 0,iCnt = 0;
    int *arr[r];

    for(i = 0 ; i < r;i++)
    {
        arr[i] = (int *)malloc(c * sizeof(int));
    }

    for(i = 0 ; i < r;i++)
    {
        for(j = 0 ; j < c;j++)
        {
            arr[i][j] = ++iCnt;
        }
    }
    printf("====**** Display 2D Matrix ****=====\n");
    for(i = 0 ; i < r;i++)
    {
        for(j = 0 ; j < c;j++)
        {
            printf("%3d",arr[i][j]);
        }
        printf("\n");
    }

    free(arr);
}






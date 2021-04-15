#include <stdio.h>

int main()
{
    int i=0, j=0, No=0;

    printf("Enter number of rows:\n ");
    scanf("%d", &No);

    for(i = 1; i <= No; i++)
    {
        for(j = 1; j <= No; j++)
        {
            if(i == j || i+j == No+1)
            {
                printf(" *");
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

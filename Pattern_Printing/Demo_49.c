#include <stdio.h>

int main()
{
    int i=0, j=0, No=0;

    printf("Enter number of rows:\n ");
    scanf("%d", &No);

    for(i=1; i<2*No; i++)
    {
        for(j=1; j<2*No; j++)
        {
            if(i == No || j == No)
            {
                printf(" +");
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

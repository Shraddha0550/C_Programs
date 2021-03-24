#include <stdio.h>

int main()
{
    int i=0, j=0, No=0;


    printf("Enter number of rows:\n ");
    scanf("%d", &No);

    int space = No;
    int col = 1;
    for(i=1; i<=2*No; i++)
    {


        for(j=1; j<=space; j++)
        {
            printf(" *");
        }
        for(j=1; j<=2*col; j++)
        {
            printf("  ");
        }
        for(j=1; j<=space; j++)
        {
            printf(" *");
        }

        if(i < No)
        {
            space--;
            col++;
        }
        else
        {
            space++;
            col--;
        }

        printf("\n");
    }

    return 0;
}

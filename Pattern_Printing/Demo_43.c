#include <stdio.h>

int main()
{
    int i=0, j=0, No=0;


    printf("Enter number of rows: ");
    scanf("%d", &No);

    int col = 1;
    for(i=1; i<=2*No; i++)
    {


        for(j=1; j<=col; j++)
        {
            printf("  *");
        }

        if(i < No)
        {
            col++;
        }
        else
        {
            col--;
        }

        printf("\n");
    }

    return 0;
}

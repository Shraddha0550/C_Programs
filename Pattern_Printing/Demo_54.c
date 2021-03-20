/*
Enter number of rows: 5
Enter number of columns: 5

12345
2345     1
345     21
45     321
5     4321
*/

#include <stdio.h>

int main()
{
    int rows=0, cols=0, i=0, j=0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    for(i=1; i<=rows; i++)
    {
        for(j=i; j<=cols; j++)
        {
            printf("%d", j);
        }

        for(j=i-1; j>=1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

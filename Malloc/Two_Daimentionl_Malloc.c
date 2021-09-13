#include<stdio.h>
#include<stdlib.h>
int main()
{

    int irow = 0 , icol = 0, i = 0, j = 0;
    int ** p = NULL;

    printf("\n Enter the row and column count  = ");
    scanf("%d%d",&irow , &icol);

    p = (int **) malloc(irow * sizeof(int*));

    for(i = 0; i < irow ; i++)
    {
        p[i] = (int *) malloc (icol * sizeof(int));
    }

    printf("\n Enter A Element :\n");
    for(i = 0; i < irow ; i++)
    {
        for(j = 0; j < icol ; j++)
        {

            scanf("%d",&p[i][j]);
        }

    }
    system("cls");
    printf("======================\n");
     for(i = 0; i < irow ; i++)
    {
        for(j = 0; j < icol ; j++)
        {

            printf("  %d\t",p[i][j]);
        }
        printf("\n");

    }


    for(i = 0; i < irow ; i++)
    {
        free(p[i]);
    }

    free(p);

    return 0;
}




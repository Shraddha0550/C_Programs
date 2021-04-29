#include<stdio.h>
#include<stdlib.h>
int main()
{

    int icnt = 0 , isum = 0, i = 0;
    int * iptr = NULL;

    printf("\n Enter the how many custemer = ");
    scanf("%d",&icnt);

    iptr = (int *) malloc(icnt * sizeof(int));

    for(i = 0; i < icnt ; i++)
    {

        printf("Enter a bill %d =",101+i);
        scanf("%d",&iptr[i]);

    }
    system("cls");
    printf("Enter bill are ==>\n");
     for(i = 0; i < icnt ; i++)
    {
        isum = isum + iptr[i];
        printf("%d\n",iptr[i]);


    }

    printf("\n sum of given number = %d",isum);
    free(iptr);
    return 0;
}




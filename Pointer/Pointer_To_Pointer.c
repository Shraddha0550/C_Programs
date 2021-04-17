#include<stdio.h>
int main()
{
    int var = 123;
    int *ptr1;
    int **ptr2;

     ptr1=&var;
     ptr2=&ptr1;

    printf("%d\n",var);
    printf("%d\n",&var);
    printf("\n\n");

    printf("%d\n",ptr1);
    printf("%d\n",&ptr1);
    printf("\n\n");

    printf("%d\n",ptr2);
    printf("%d\n",&ptr2);
    printf("\n\n");

    printf("%d\n",*ptr1);
    printf("%d\n",*ptr2);


}

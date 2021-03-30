#include<stdio.h>
int main(void)
{
    int const i = 10;
    int  j = 20;


    int *ptr = &i;

    printf("*ptr: %d\n", *ptr);


    ptr = &j;

    printf("*ptr: %d\n", *ptr);

    return 0;
}

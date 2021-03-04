#include <stdio.h>
int main(void)
{
    int i = 10;
    int j = 20;

    const int *ptr = &i;

    printf("ptr: %d\n", *ptr);


    ptr = &j;
    printf("ptr: %d\n", *ptr);

    printf("%d",sizeof(ptr));

    return 0;
}

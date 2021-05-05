#include<stdio.h>
int main()
{
    int iNo1 = 0 , iNo2 = 0;

    printf("Enter The Number\n");
    scanf("%d",&iNo1);

    printf("Enter The Number\n");
    scanf("%d",&iNo2);

    printf("\n\nAfter Swapping:    No1=%d\t  No2= %d\n",iNo1,iNo2);

    swap(&iNo1,&iNo2);

    printf("Before Swapping:   No1=%d\t  No2= %d",iNo1,iNo2);



    return 0;
}
void swap(int *x , int *y)
{
    int T = 0;

    T = *x;
    *x = *y;
    *y = T;
}

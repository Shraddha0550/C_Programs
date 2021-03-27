#include<stdio.h>
int main()
{
    char str1[40]= "My Name Is " , str2[20] = "Shraddha";
    char *ptr1 , *ptr2;


       ptr1= str1;
       ptr2= str2;


    while( *ptr1 != '\0')
    {
        ptr1++;
    }
    while( *ptr2 != '\0')
    {
        *ptr1 = *ptr2;
        ptr2++;
        ptr1++;
    }

    printf("%s",str1);
    getch();
    return 0;
}

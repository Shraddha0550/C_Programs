#include<stdio.h>
int main()
{
    char str[40];
    char *ptr;
    int cnt = 0;

    printf("\n\n\t Enter a string=");
    scanf("%[^\n]",str);

    ptr = str;

    while( *ptr != '\0')
    {

        cnt++;
        ptr++;

    }
     printf("\n\tstring_length is:%d",cnt);
     getch();
    return 0;
}

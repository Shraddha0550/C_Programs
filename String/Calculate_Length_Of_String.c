#include<stdio.h>

int main()
{
    char str[30];
    char *ptr = &str;
    int len = 0;

    printf("Enter a String:");
    gets(str);

    while(*ptr != '\0')
    {
        len++;
        ptr++;

    }

    printf("Lenght of string is =%d ",len);

    return 0;
}

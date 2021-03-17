#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<strings.h>

int main()
{
    int i = 0;
    printf("\n\n\t");

    char str[50] = "WELCOME \n MY NAME IS SHRADDHA BALU BARGE.";
    char *ptr;


    ptr = str;

    while( *ptr != '\0')
    {
        Sleep(100);
        printf("%c",*ptr);

        ptr++;
    }

    _getch();
    return 0;
}

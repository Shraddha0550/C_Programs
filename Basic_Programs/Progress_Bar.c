#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<strings.h>

int main()
{
    int i = 0 ;

    printf("\n\n\t");

    printf("Loading..\n\n\t");
    for(i = 1 ; i <= 60 ; i++)
    {
        if(i >= 30 && i <= 45)
        {
            Sleep(500);
            printf("%c",219);
        }
        Sleep(100);
        printf("%c",219);

    }
    printf("\n\n\n\t\t\t Welcome..");


    _getch();
    return 0;
}

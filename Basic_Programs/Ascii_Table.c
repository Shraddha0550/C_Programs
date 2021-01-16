#include<stdio.h>
#include<conio.h>
int main()
{

    int Ascii = 0 ;
    for(Ascii = 0;Ascii <= 127; Ascii++)
    {
        printf("%d ASCII value is = %c \n",Ascii,Ascii);
    }
    return 0;
}

#include<stdio.h>

int Reverse_No(int Temp)
{
     int Rem = 0 , Rev = 0;

    while(Temp > 0)
    {
        Rem = Temp % 10 ;
        Rev = Rev * 10 + Rem ;

        Reverse_No(Temp = Temp / 10);

    }

    return Rev;
}
int main()
{
    int iNo = 0 ;

    int Temp = 0;

    printf("Enter A Number : ");
    scanf("%d",&iNo);

    Temp = iNo ;

    printf(" Reverse Number is = %d",Reverse_No(Temp));

    return 0;
}


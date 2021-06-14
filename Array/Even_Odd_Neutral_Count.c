#include<stdio.h>
#define MAX 5

int i = 0;

void Even_Cnt(int *Arr)
{
    int E_cnt = 0;
     for(i = 0 ; i< MAX;i++)
    {
        if(Arr[i] == 0)
        {
            continue;
        }
        if(Arr[i] % 2 == 0)
        {
            E_cnt++;
        }

    }
    printf("%d",E_cnt);
}
void Odd_Cnt(int *Arr)
{
    int O_cnt = 0;
     for(i = 0 ; i< MAX;i++)
    {
        if(Arr[i] % 2 != 0)
        {
           O_cnt++;
        }

    }
    printf("%d",O_cnt);
}
void Neutral_Cnt(int *Arr)
{
    int N_cnt = 0;
     for(i = 0 ; i< MAX;i++)
    {
        if(Arr[i] == 0)
        {
            N_cnt++;
        }

    }
    printf("%d",N_cnt);
}

int main()
{
    int Arr[MAX] = {};


    printf("\n Enter A Number:");
    for(i = 0 ; i< MAX;i++)
    {
        scanf("%d",&Arr[i]);
    }
    printf("\n\n Even Count IS:");
    Even_Cnt(Arr);

    printf("\n\n Odd Count IS:");
    Odd_Cnt(Arr);

    printf("\n\n Neutral Count IS:");
    Neutral_Cnt(Arr);

    getch();

}

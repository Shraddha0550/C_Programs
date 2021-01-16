#include<stdio.h>
#include<conio.h>
int main()
{
    char ch[10] = '\0' , ci[5] = '\0' ,co[10] = '\0';
    int No = 0;

    printf("================================================\n");
    printf("\n Enter Student Name ,Roll Number,City And Course:\n");
    scanf("%s%d%s%s",&ch,&No,&ci,&co);
    printf("================================================\n");

    printf("\n Student Name:%s\n      Roll No:%d\n         City:%s\n       Course:%s\n",ch,No,ci,co);
    printf("\n================================================");
    getch();
    return 0;
}

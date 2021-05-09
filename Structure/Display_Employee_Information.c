#include<stdio.h>
#include<conio.h>

int main()
{
    struct employee
    {
        int No;
        char name[20];
        float salary;
    };
    struct employee e1;

    printf("Enter employee Number name and salary\n");
    scanf("%d%s%f",&e1.No,e1.name,&e1.salary);

    printf("==============================\n");

    printf("   e1.No=%d\n   e1.name=%s\n   e1.salary=%.2f",e1.No,e1.name,e1.salary);

    getch();
    return 0;
}

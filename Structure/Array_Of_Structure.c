#include<stdio.h>
#include<conio.h>
int main()
{
        int i = 0;
        struct student
        {
            int age;
            char name[20];

        };
        struct student s[3];

        printf("Enter student age and name\n");

        for(i = 0; i < 3; i++ )
        {
            scanf("%d%s",&s[i].age,s[i].name);
        }

        printf("===============================\n");

        for(i = 0; i < 3; i++ )
        {
            printf("   age  of %d student = %d\n   name of %d student = %s\n",i+1,s[i].age,i+1,s[i].name);
        }
        printf("===============================\n");

        getch();
        return 0;

}

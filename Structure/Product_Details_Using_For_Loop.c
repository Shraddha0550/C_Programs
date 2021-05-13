#include<stdio.h>
#include<conio.h>
int main()
{
     int i = 0;
    struct product
    {
        int id;
        char name[20];
        int selling_p;
        int purches_p;
    };
    struct product p[3];

    for(i=0;i<=2;i++)
    {
        printf("enter your id\n");
        scanf("%d",&p[i].id);

        printf("enter your name\n");
        scanf("%s",&p[i].name);

        printf("enter your selling_p\n");
        scanf("%d",&p[i].selling_p);

        printf("enter your perches_p;\n");
        scanf("%d",&p[i].purches_p);

    }
    system("cls");
    printf("========================================================");

     for(i=0;i<=2;i++)
    {

        printf("\n id=%d\n name=%s\n selling_p=%d\n perches_p=%d\n",p[i].id,p[i].name,p[i].selling_p,p[i].purches_p);

    }
    printf("========================================================");

    return 0;
}

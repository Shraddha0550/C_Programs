#include<stdio.h>
int main()
{
    char string[] = {'a','b'};
    printf("%d\n",sizeof(string));

    char string1 = {'a','b'};
    printf("%d\n",sizeof(string1));

    char string2[20] = {'a','b'};
    printf("%d\n",sizeof(string2));

    char var = "shraddha";
     printf("%d\n",sizeof(var));


     printf("%d\n",sizeof("shraddha"));   ///8 character and + '\0'=9
     printf("%d\n",sizeof(int));
     printf("%d\n",sizeof(char));
     printf("%d\n",sizeof(float));
     printf("%d\n",sizeof(double));
     printf("%d\n",sizeof(long int));
      printf("%d\n",sizeof(long long int));
       printf("%d\n",sizeof(short ));

}

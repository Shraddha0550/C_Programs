/*
Step 1: Divide the number by 2 through % (modulus operator) and store the remainder in array
Step 2: Divide the number by 2 through / (division operator)
Step 3: Repeat the step 2 until number is greater than 0


divide   no   modulo
2        5     1
2        2     0
         1  ==>1

         ans:bottom to up
              101  */


#include<stdio.h>
#include<stdlib.h>

int main()
{
        int n=0,i=0,rem = 0,p = 0,rev = 0;
        system ("cls");

        printf("Enter the Decimal number to convert Binary : ");
        scanf("%d",&n);

        while(n > 0)
        {
            p = n % 2;
            if(p == 0)
            {
                printf("%d",p);
                n = n / 2;
                continue;
            }
            rev = rev * 10 + p;

            n = n / 2;
        }
         printf("%d",rev);


        printf("\n\n===** The Conversion of Decimal To Binary **====\n\n");

        while(rev > 0)
        {
            rem = rev % 10;

            printf("%d",rem);
            rev = rev / 10;
        }

        getchar();

        return 0;
}


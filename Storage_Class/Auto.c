#include<stdio.h>

int no;                        // Global Variable

void fun()
{   // i , j , k ,l is Variable of Auto Storage class
	int i = 11;                        
	int j;
	auto int k;
	auto int l = 11;

	printf("%d\n",i);            // 11
	printf("%d\n",j);            // Garbage Value
	printf("%d\n",k);            // Garbage Value
	printf("%d",l);              // 11
}
int main()
{
	printf("Inside Main \n");
	fun();
	return 0;
}

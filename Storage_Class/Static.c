#include<stdio.h>

int fun()
{
	static int i = 11;
	printf("%d\n",i);
	
	i = 27;
	i++;
	printf("%d\n",i);
}
int main()
{
	
	printf("Inside Main() Function");
	fun();               // 11 28
	fun();              //  28 28

	return 0;
}
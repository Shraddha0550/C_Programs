#include<stdio.h>

void gun()
{
    // x , y is variable of register Storage class
	register int x = 11;
	register int y;

	printf("%d\n",x);
	printf("%d",y);
}
int main()
{
	printf("Inside Main \n");
	gun();
	return 0;
}
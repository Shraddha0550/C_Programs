#include<stdio.h>
#include<conio.h>

int main()
{
  int i;
  int arr[4] = {0, 0 ,0, 0};

  printf("%d\n", sizeof(arr));

  for(i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    printf(" %d " ,arr[i]);

  getchar();
  return 0;
}

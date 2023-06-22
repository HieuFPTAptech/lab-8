#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a[5];
  int *ptr = a;

  for (int i = 0; i < 5; i++)
  {
    printf("\nEnter array element a[%d]: ", i + 1);
    scanf("%d", ptr);
    ptr++;
  }
  
  for (int i = 0; i < 5; i++)
  {
    printf("\t%d", a[i]);
  }
  return 0;
}

#include<stdio.h>

int main(){
  int a[5];
  int *ptr_a = a;
  int b[5];
  int *ptr_b = b;
  int c[5];

  for (int i = 0; i < 5; i++)
  {
    printf("\nEnter array A's element a[%d]: ", i + 1);
    scanf("%d", ptr_a);
    ptr_a++;
  }
  
  printf("\n=================");
  for (int i = 0; i < 5; i++)
  {
    printf("\nEnter array B's element b[%d]: ", i + 1);
    scanf("%d", ptr_b);
    ptr_b++;
  }
  
  printf("\nThe array A");
  for (int i = 0; i < 5; i++)
  {
    printf("\t%d", a[i]);
  }
    
  printf("\nThe array B");
  for (int i = 0; i < 5; i++)
  {
    printf("\t%d", b[i]);
  }

  printf("\nThe array C");
  for (int i = 0; i < 5; i++)
  {   
    c[i] = a[i] + b[i];
    printf("\t%d", c[i]);
  }

  return 0;
}

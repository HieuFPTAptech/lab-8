#include <stdio.h>
#include <stdlib.h>

int primeNumber (int n)
{  
  while (n != 0 || n != 1)
  {
    for (int i = 2; i * i < n; i++)
    {
      if (n % i == 0)
      {
        return 0;
      }  
    }
  }
  return 1;
}

int main(int argc, char const *argv[])
{
  int n;
  printf("\nEnter array length: ");
  scanf("%d", &n);
  int *array = (int *) malloc(n * sizeof(int));

  for (int i = 0; i < n; i++)
  {
    printf("\nEnter array element a[%d]: ", i + 1);
    scanf("%d", &array[i]);
  }

  printf("\nThe Array");
  for (int i = 0; i < n; i++)
  {
    printf("\t%d", array[i]);
  }
        
  printf("\nPrime numbers in Array");
  for (int i = 0; i < n; i++)
  {
    if (primeNumber(array[i]))
    {
      printf("\t%d", array[i]);
    }
            
  }
  free(array);
  return 0;
}

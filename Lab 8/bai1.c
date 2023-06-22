#include <stdio.h>

void swap(int *ptr_a, int *ptr_b){
  int temp;
  temp = *ptr_a;
  *ptr_a = *ptr_b;
  *ptr_b = temp;
}

int main(int argc, char const *argv[])
{
  int a, b;
  int *ptr_a, *ptr_b;

  ptr_a = &a;
  ptr_b = &b;

  printf("\nEnter a:");
  scanf("%d", ptr_a);
  printf("\nEnter b:");
  scanf("%d", ptr_b);

  printf("\n====Before swap====");
  printf("\na = %d with address: %p", *ptr_a, ptr_a);
  printf("\nb = %d with address: %p", *ptr_b, ptr_b);

  swap(ptr_a, ptr_b);

  printf("\n");
  printf("\n====After swap====");
  printf("\na = %d with address: %p", *ptr_a, ptr_a);
  printf("\nb = %d with address: %p", *ptr_b, ptr_b);

  return 0;
}



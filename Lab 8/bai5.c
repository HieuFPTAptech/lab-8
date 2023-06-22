#include<stdio.h>
#include<string.h>

int main(){
  char str[79];
    
  printf("\nEnter string: ");
  gets(str);

  int length = strlen(str);
  printf("\nstring has %d characters", length);
    
  return 0;
}

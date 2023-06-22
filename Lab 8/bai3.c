#include <stdio.h>

int checkSymmetry(char *text){
  int len = strlen(text);
  char *start = text;
  char *end = text + len - 1;

  while (start < end)
  {
    if (*start != *end)
    {
      return 0;
    }
    start++;
    end--;
  }
  return 1;
}

int main (int argc, char const *argv[])
{
  char text[80];
  printf("\nEnter string: ");
  fgets(text, sizeof(text), stdin);

  text[strcspn(text, "\n")] = '\0';

  if (checkSymmetry(text)) 
  {
    printf("\nstring is symmetric");
  }
  else
  {
  printf("\nstring is not symmetric");
  }
  
  return 0;
}

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int reverse(char **dest, char source[]);

int main(void)
{
  char name_array[]="My name";
  char *reversed_name=NULL;

  printf("name: %s\n",name_array);
  if(reverse(&reversed_name,name_array))
      printf("\"%s\" reversed is \"%s\"\n",name_array,reversed_name);
  else
    printf("could not reverse string\n");

  if(reversed_name!=NULL)  /* memory cleanup */
    free(reversed_name);
  return 0;
}

int reverse(char **dest, char source[])
{
  int l = strlen(source);

  *dest = calloc(l+1, sizeof(char));

  for (int i = 0; i<l; i++) {

    (*dest)[i] = source[l-1-i];
  }
  return l;
}

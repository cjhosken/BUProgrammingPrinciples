#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int cat(char **, char *);

int main(void)
{
  char string[51];
  char *output=NULL;
  char choice;
  int i;
  do
  {
    printf("Please enter a string [<50 chars]: ");
    fgets(string,50,stdin);
    if(string[strlen(string)-1]=='\n') /* if newline was read as well */
	  string[strlen(string)-1]=0;      /* discard it */
    if(cat(&output,string))
      printf("\n\nThe string now contains:\n%s\n",output);
    else
    {
      printf("error: memory (re-)allocation failed!\n\n");
      return 1; /* exit with error */ 
    }
    printf("Continue? (y/n) - ");
    fgets(string,3,stdin); /* read input from keyboard - leave a safety buffer to account for read newline */
    choice=string[0]; /* use the first character from the previous read as the choice */
  } while(choice=='y' || choice=='Y');

  free(output);
  return 0;
}

int cat(char **dest, char *src)
{
  int l = 0;

  if (*dest != NULL) {
    l = strlen(*dest);
  }

  *dest = realloc(*dest, (l + strlen(src))*sizeof(char));

  for (int i=0; i <= strlen(src); i++) {
    (*dest)[l+i] = src[i];
  }

  return 1;
}

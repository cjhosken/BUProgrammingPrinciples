#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef char* str;

int cat(str**, char*, int*);

int main(void)
{
  char string[51];
  str *output=NULL;
  char choice;
  int id = 0;
  do
  {
    printf("Please enter a string [<50 chars]: ");
    fgets(string,50,stdin);
    if(string[strlen(string)-1]=='\n') /* if newline was read as well */
	  string[strlen(string)-1]=0;      /* discard it */
    if(cat(&output,string, &id))
      printf("\n\nThe string now contains:\n%s\n",(*output));
    else
    {
      printf("error: memory (re-)allocation failed!\n\n");
      return 1; /* exit with error */ 
    }
    printf("Continue? (y/n) - ");
    fgets(string,3,stdin); /* read input from keyboard - leave a safety buffer to account for read newline */
    choice=string[0]; /* use the first character from the previous read as the choice */
  } while(choice=='y' || choice=='Y');

  for (int i = id-1; i >= 0; i--) {
    printf("%s\n", output[i]);
    free(output[i]);
  }

  free(output);
  return 0;
}

int cat(str **output, char *src, int *id)
{
  *output = realloc(*output, ((*id) + 1)*sizeof(str));

  (*output)[*id] = malloc((strlen(src) + 1) * sizeof(char));

  for (int i=0; i <= strlen(src); i++) {
    (*output)[*id][i] = src[i];
  }

  (*id)++;

  return 1;
}
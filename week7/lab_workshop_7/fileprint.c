#include<stdio.h>
#include <ctype.h>

int main(void)
{
	FILE *f; /* file pointer */
	char filename[50]; /* filename string */
	int c; /* single character */
	
	/* request a filename */
	printf("Filename? - ");
	scanf("%s",filename);
	fflush(stdin);
	
	/* attempt to open the named file for reading */
	f=fopen(filename,"r");
	if(f!=NULL) /* if successful */
	{
		while((c=fgetc(f))!=EOF) /* step through file character by character */
		{
			printf("%c",tolower(c));
		}
		printf("\n");
		fclose(f); /* close the file afterwards */
		return 0;
	}
	else /* if file could not be opened */
	{
		return 1;
	}
}

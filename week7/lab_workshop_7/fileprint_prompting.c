#include<stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	FILE *f; /* file pointer */
	FILE *o;
	char *output = NULL;
	char *filename = NULL; /* filename string */
	int c; /* single character */
	
	for (int i = 0; i<argc;i++) {
		if (strcmp(argv[i], "-r")==0) {
			filename = argv[i+1];
		}
		if (strcmp(argv[i], "-o")==0) {
			output = argv[i+1];
		}
	}
	
	/* attempt to open the named file for reading */
	f=fopen(filename,"r");

	if (*output != NULL) {
		o=fopen(output, "w");

	}

	if(f!=NULL) /* if successful */
	{
		while((c=fgetc(f))!=EOF) /* step through file character by character */
		{
			if (*output == NULL) {
				printf("%c",tolower(c));
			} else {
				fputc(tolower(c), o);
			}
		}
		if (output == NULL) {
			printf("\n");
		}
		fclose(f); /* close the file afterwards */
		fclose(o);
		return 0;
	}
	else /* if file could not be opened */
	{
		return 1;
	}
}

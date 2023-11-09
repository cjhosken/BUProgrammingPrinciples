#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char shifted(char c,char s)
{
	if (isalnum(c)) {
		char offset = 'a';
		if (isupper(c)) {
			offset = 'A';
		}
		
		/*
		shift character c by s characters if it is one of the printable letters (upper 
		or lowercase); return the shifted character value if it was a letter or the 
		original character in any other case - make sure that the shift wraps around
		correctly at the a-z/z-a shifts
		*/

		char shifted = c + s - offset;

		if (shifted < 0) shifted += 26;
		
		return shifted % 26 + offset;
	}
	return c;
}

int main(void)
{
	FILE* sf;
	FILE* of;
	char source_filename[50], output_filename[50];
	int i,shift;
	char message1[257],message2[257];
	int c;

	printf("\nEnter your input path: ");
	scanf("%s",source_filename); fflush(stdin); /* retrieves a string of a set maximum length (or earlier if the return key is pressed) from the keyboard */

	sf =fopen(source_filename, "r");
	if (sf == NULL) {
		return 1;
	}

	printf("\nEnter your output path: ");
	scanf("%s",output_filename); fflush(stdin);
	of = fopen(output_filename, "w");

	if (of == NULL) {
		return 1;
	}

	printf("\nEnter your shift value as a number: ");
	scanf("%d",&shift);
	fflush(stdin);

	shift=shift%26;


	while (c != EOF) {
		c = fgetc(sf);
		printf("%c", c);
		fputc(shifted(c, (char) shift), of);
	};

	fclose(sf);
	fclose(of);

	return 0;

}

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
	int i,shift;
	char message1[257],message2[257];

	printf("\nEnter your original message: ");
	fgets(message1,256,stdin); /* retrieves a string of a set maximum length (or earlier if the return key is pressed) from the keyboard */
    fflush(stdin);
	printf("\nEnter your shift value as a number: ");
	scanf("%d",&shift);
	fflush(stdin);

	shift=shift%26;

	/*
	   add code to cycle through the original message string (array) that shifts the 
	   printable letters according to the shift value entered (by passing them to the 
	   shifted function), but which leaves punctuation marks and spaces intact  
	*/

	strcpy(message2, message1);

	for (int i = 0; i < strlen(message2); i++) {
		message2[i] = shifted(message2[i], (char) shift);
	}

	printf("Original message: %s\nShifted by %d: %s\n",message1,shift,message2);    

    return 0;
}

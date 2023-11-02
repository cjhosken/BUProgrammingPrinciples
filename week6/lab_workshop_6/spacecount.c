#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,words=1;
	char message[2049];
	char *mp=NULL;

	mp=message; /* to be removed for part 5 of exercise 13 */

	printf("\nEnter some text: ");
	fgets(message,2048,stdin); /* retrieves a string of a set maximum length (or earlier if the return key is pressed) from the keyboard */
    fflush(stdin);

	printf("\nYou have entered the string \"%s\".\n",message);

	// PART A
	/*for(i=0;mp[i+1]!='\0';i++)
	{
		if (mp[i] == ' ') {
			words++;
		}

	}*/

	// PART B
	/*
	for (i=0; *(message+i+1) != '\0'; i++) {
		if (*(message+i) == ' ') {
			words++;
		}
	}
	*/

	for(mp=message; *mp != '\0'; mp++) {
		if (*mp == ' ') {
			words++;
		}
	}

	printf("\nThe input text includes %d words.\n",words);    

    return 0;
}

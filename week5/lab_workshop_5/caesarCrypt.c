#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char shifted(char c,char s)
{
	/*
	   shift character c by s characters if it is one of the printable letters (upper 
	   or lowercase); return the shifted character value if it was a letter or the 
	   original character in any other case - make sure that the shift wraps around
	   correctly at the a-z/z-a shifts
    */

	if(isupper(c))
	{
		if(s>=0) 
		{
			c=((c-'A'+s)%26)+'A'; /* shift and ensure wrap-around */
		}
		else
		{
			char t=(c-'A'+s); /* shift */
			if(t<0) t+=26; /* ensure wrap-around */
			c=t+'A';
		}
	}
	else
	{
		if(s>=0) 
		{
			c=((c-'a'+s)%26)+'a'; /* shift and ensure wrap-around */
		}
		else
		{
			char t=(c-'a'+s); /* shift */
			if(t<0) t+=26; /* ensure wrap-around */
			c=t+'a';
		}
	}
    return c; /* return shifted character */
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
	
	shift=shift%26; /* there is no point in shifting more than 26 spaces */

	/*
	   cycle through the original message string (array) and shift the printable 
	   letters according to the shift value entered (by passing them to the 
	   shifted function) 
	*/
	for(i=0;i<257&&message1[i]!=0;i++) /* step through message 1 */
	{
		if(isalpha(message1[i])) /* if character is a letter */
		{
			message2[i]=shifted(message1[i],(char)shift); /* shift message1 character and store result in message2 */
		}
		else /* if not a letter, keep it */
		{
			 message2[i]=message1[i]; /* copy character across */
		}
	}
	message2[i]=0; /* set string terminator */

	printf("Original message: %s\nShifted by %d: %s\n",message1,shift,message2);    

    return 0;
}
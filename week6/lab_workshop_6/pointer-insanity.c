#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char s[18]="This is a string.";
	char *sp=NULL;

	sp=s;

    printf("s has the address %p, the size %d and states \"%s\"\n",&s,(int)sizeof(s),s); 
    // This is the string value, it contains 18 characters which is why it has a size of 18 (it is a string because its a string)
    // its address is the location of the string in the computer 
	printf("sp has the address %p, the size %d and states \"%s\"\n",&sp,(int)sizeof(sp),sp);
    // it has size 8 because thats the size of the address (its 8 characters long)
    // This is the location of the string stored in memory. It's content is the value of the location of the string address in the computer
    return 0;
}

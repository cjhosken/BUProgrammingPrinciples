#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    printf("\nThis program simply prints out a table of the printable characters in\nthe ASCII character set:\n\n");    
    for (i=32;i<127;i++) {
        printf("%u [%c]\t",i,i);
		if(i%8==7) printf("\n");
    }
    printf("\n\n");
    return 0;
}

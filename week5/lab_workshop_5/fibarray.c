#include<stdio.h>

unsigned long int fibtable[41]; /* global table of fibonacci numbers */

void fillTable(void);
unsigned long getFib(int);

int main(void)
{
	int index;

	fillTable(); /* initialize the fibonacci table */
	printf("Which fibonacci number do you want (0-40)? - "); 
	scanf("%d",&index); /* read table index */
	fflush(stdin);
	printf("The fibonacci value %d is %ld.\n",index,getFib(index)); /* print results */

	return 0;
}

void fillTable(void)
{
	/* to initialize the table, set the two special cases (1st 2 elements) manually and then use a for loop to set the others */
	fibtable[0] = 1;
	fibtable[1] = 1;

	for (int i = 2; i < sizeof(fibtable) / sizeof(unsigned long int); i++) {
		fibtable[i] = fibtable[i-1] + fibtable[i-2];
	}
}

unsigned long getFib(int f) /* table lookup */
{
	/* the function should return 0 if the parameter is <0 or >40 */
	if (f < 0 || f > 40) return 0;
   	/* otherwise it should simply return the relevant entry from the fibonacci table */
	return fibtable[f];
}

#include<stdio.h>

/* use long integers as the variable, as factorials grow very quickly */
long int factorialI(long int); /* iterative factorial solution */
long int factorialR(long int); /* recursive factorial solution */

int main(void)
{
   long int number=1,resultI=0,resultR=0; /* variable for storing the number and the factorial results */
   
   while(number!=0)
   {
       printf("\nPlease enter a number (0 to terminate): ");
	   scanf("%ld",&number); /* %ld is the format for long integers */
	   fflush(stdin);
	  
	   resultI=factorialI(number);
	   resultR=factorialR(number);
	  
	   printf("The result for %ld! is %ld (iterative) and %ld (recursive).\n",number,resultI,resultR);
	   if(resultI!=resultR)
	   {
	     printf("These should have been the same - something must have gone wrong.\n");
	   }
	}
	return 0;
}

long int factorialI(long int f) /* iterative factorial function */
{
	long int output = 1;

	while (f > 1) {
		output *= f;
		f--;
	}

	return output;
   /* add the variables and the iteration for the iterative solution here */
}

long int factorialR(long int f) /* recursive factorial function */
{
	/* add the recursive solution here */
	if (f == 1) return 1;

	return f * factorialR(f-1);
}
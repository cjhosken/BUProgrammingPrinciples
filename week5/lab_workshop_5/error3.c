#include<stdio.h>

int selector(int,int);

int main(void)
{
   int i, variable = 5;
   for(i=0; i<=6; i++)
   {
	   variable = selector(variable, i);
   }
   printf("variable = %d\n",variable);
   return 0;
}

int selector(int a,int b)
{
	switch(b)
	{
		case 1:  a -= 3;          
			break;
		case 3:  a--;
			break;
		case 4:  a+=2;
		default: a++;             
	}
	return a;
}
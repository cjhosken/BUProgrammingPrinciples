#include <stdio.h>

int main(void)
{
	int v = 2, w = 4;
	do 
	{
		if(w / v == 1)
		{
			v = 5;
		}
		else
		{
			v++;
			w--;
		}
		if(v == w)
		{
			v = 10;
		}
	} while(v!=10);
	printf("variable v = %d\n",v);
	return 0;
}
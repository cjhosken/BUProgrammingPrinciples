#include<stdio.h>

double power(double,unsigned);

int main(void)
{
   printf("variable = %f\n",power(-2.0,2));
   return 0;
}

double power(double val, unsigned pow)
{
   if(pow == 0)
   {
      return 1.0;
   }
   else {
      return power(val, pow - 1) * val;
   }
}
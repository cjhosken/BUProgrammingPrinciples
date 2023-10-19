#include<stdio.h>

int main(void)
{
  int year=2015, day=0, month=0; /* some of the variables that the program uses - year is initialized to 2015 */

  /* declare any other variables that are required - as good practice, initialize all of these to 0 */
  
  int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,k=0,l=0,m=0;
  
  /* add operations that are required */
  a = year % 19;
  b = year / 100;
  c = year % 100;
  d = b / 4;
  e = b % 4;
  f = (b + 8) / 25;
  g = (b - f + 1) / 3;
  h = (19*a + b - d - g + 15) % 30;
  i = c / 4;
  k = c % 4;
  l = (32 + 2*e + 2*i - h - k) % 7;
  m = (a + 11*h + 22*l) / 451;
  
  /* add the final two calculations to identify the correct day and month */
  month = (h + l - 7*m + 114) / 31;
  day = ((h + l - 7*m + 114) % 31) + 1;
  
  /* output the final result */
  printf("The date for Easter in %4d is %02d/%02d/%04d.\n",year,day,month,year); /* this prints out the result */
  
  return 0;
}
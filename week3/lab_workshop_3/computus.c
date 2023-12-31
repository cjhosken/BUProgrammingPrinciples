#include<stdio.h>

int main(void)
{
  int year=2024, day=0, month=0; /* some of the variables that the program uses - year is initialized to 2015 */

  /* this is where you need to add any other variables and operations that are required */
  int a = year % 19;
  int b = year / 100;
  int c = year % 100;
  int d = b / 4;
  int e = b % 4;
  int f = (b + 8) / 25;
  int g = (b - f + 1) / 3;
  int h = (19*a + b - d - g + 15) % 30;
  int i = c / 4;
  int k = c % 4;
  int l = (32 + 2*e + 2*i - h - k) % 7;
  int m = (a + 11*h + 22*l) / 451;

  month = (h + l - 7*m + 114) / 31;
  day = ((h + l - 7*m + 114) % 31) + 1;

  printf("The date for Easter in %4d is %02d/%02d/%04d.\n",year,day,month,year); /* this prints out the result */
  
  return 0;
}
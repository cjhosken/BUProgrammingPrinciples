#include<stdio.h>

int leapYear(int);                    /* function prototype */

int main(void)
{
   int year=0;
   printf("Year: ");             /* request year as input   */
   scanf("%d",&year);            /* accept/read year “year” */
   fflush(stdin);
   if(leapYear(year)==1) printf("%4d is a leap year.\n",year);
   else printf("%4d is no leap year.\n",year);
   return 0;
}
 
int leapYear(int year)
{
   if(year % 4 == 0) /* common element: divisible by 4 */
   {      /* first test if the Julian calendar applies */
      if(year <= 1582) return 1;                /* yes */
      else   /* now check the Gregorian calendar rules */
      {
         if(year % 100 == 0)
         {
            if(year % 400 == 0) return 1;       /* yes */
            else return 0;                      /* no  */
         }
         else return 1;                         /* yes */
      }
   }
   else return 0;                               /* no  */
}

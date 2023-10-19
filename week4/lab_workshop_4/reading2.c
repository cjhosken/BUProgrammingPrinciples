#include<stdio.h>

int main(void)
{
   int i = 0, r=10;
   float f = 0.5f;

   /*
   printf("Number of loops to execute: ");
   scanf("%d",&r);
   fflush(stdin);
   */

   while(i < r) // run 10 times
   {
      if(i%2 == 0)
      {
         f += 0.5f; // 5 * 0.5
      }
      else
      {
         f += 0.25f; // 5 * 0.25
      }
      i++;
   }
   printf("variable f = %f\n",f); 
   // 0.5 + (5 * 0.5) + (5 * 0.25)
   // 0.5 + (2.5) + (1.25)
   // 4.25
   return 0;
}

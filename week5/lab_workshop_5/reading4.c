#include<stdio.h>

int v1 = 2, v2 = 0;

int main(void)
{
   int i,j=1;
   for(i=7;i>0;i--)
   {
      if(j<4)
      {
         switch(i%3)
         {
            case 1:  j--;
                     break;
            case 2:  v1--;
            default: v2 += v1;
         }
         v1 = j-v1;
      }
      else
      {
         v1+=2;
         if(i<3) continue;
         v2-=v1/2;
      }
      j++;
   }
   printf("the final value for v2 is %d.\n",v2); 
   return 0;
}

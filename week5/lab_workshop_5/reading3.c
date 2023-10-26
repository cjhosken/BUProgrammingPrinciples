#include<stdio.h>

int doStuff(int a)
{
   int b=2,c=0,i=0;
   for(i=a; i>=0; i-=2,c++)
   {
      b++;                             
      if(c%2)
         b+=c/2;                       
   }
   return b;                           
}
      
int main(void)
{
   int x=4;                            
   x = doStuff(x);                     
    printf("result = %d\n",doStuff(x));
   return 0;
}

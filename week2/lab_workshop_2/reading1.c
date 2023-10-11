#include<stdio.h>

int variable = 5, global = 3;

int main(void)
{
   int variable = 2, local = 4;
   {
      int variable = global;
      local = variable - 1;
   }
   variable += local;
   {
      int local = 1;
      variable -= local;
   }
   printf("variable = %d\n",variable);
   return 0;
}

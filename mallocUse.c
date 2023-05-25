#include <stdio.h>
# include <Stdlib.h> //include Malloc/Free


int main()
{
   int *mem=(int*)malloc(sizeof (int)*4);
   mem[0]=0;
   mem[1]=1;
   mem[2]=27;
   mem[3]=42 ;

   printf("%d,%d,%d,%d\n",mem[0],mem[1],mem[2],mem[3]);



free (mem);

    return 0;
}
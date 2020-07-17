#include <stdio.h>

void main()

{

   int n, sum = 0, t, remainder;

   printf("\nPlease enter a number to find whether it is an armstrong or not:");

   scanf("%d",&n);
   t = n;

   while( t != 0 )

   {

      remainder = t%10;

      sum = sum + remainder*remainder*remainder;

      t = t/10;

   }

   if ( n == sum )

      printf("\nThe number %d is an armstrong number", n);

   else

      printf("\nThe number %d is not an armstrong number", n);

   return 0;

}

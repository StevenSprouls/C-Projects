#include <stdio.h>
 
int main()
{
   int n, t, sum = 0, remainder, newNum;
 
   printf("Enter an integer\n");
   scanf("%d", &n);
 
   t = n;
 
   while (t != 0)
   {
      remainder = t % 10;
      sum       = sum + remainder;
      t         = t / 10;
   }
   if (sum % 9 == 0)
   {
        printf("Sum of digits of %d = %d\n", n, sum);
        printf("The new number is: %d", n);
        printf("0");
   }
   if (sum % 9 == 1)
   {
       printf("Sum of digits of %d = %d\n", n, sum);
       printf("The new number is: %d", n);
       printf("8");
   }
   if (sum % 9 == 2)
   {
       printf("Sum of digits of %d = %d\n", n, sum);
       printf("The new number is: %d", n);
       printf("7");
   }
   if (sum % 9 == 3)
   {
       printf("Sum of digits of %d = %d\n", n, sum);
       printf("The new number is: %d", n);
       printf("6");
   }
   if (sum % 9 == 4)
   {
       printf("Sum of digits of %d = %d\n", n, sum);
       printf("The new number is: %d", n);
       printf("5");
   }
   if (sum % 9 == 5)
   {
       printf("Sum of digits of %d = %d\n", n, sum);
       printf("The new number is: %d", n);
       printf("4");
   }
   if (sum % 9 == 6)
   {
       printf("Sum of digits of %d = %d\n", n, sum);
       printf("The new number is: %d", n);
       printf("3");
   }
   if (sum % 9 == 7)
   {
       printf("Sum of digits of %d = %d\n", n, sum);
       printf("The new number is: %d", n);
       printf("2");
   }
   if (sum % 9 == 8)
   {
       printf("Sum of digits of %d = %d\n", n, sum);
       printf("The new number is: %d", n);
       printf("1");
   }
     return 0;
}
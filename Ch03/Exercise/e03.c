//scanf format string
#include<stdio.h>
int main()
{
   int x = 253;
   float y = 253.35;

   printf("A\n");
   printf("a|%d|\n", x);
   printf("b| %d|\n", x);
   printf("B\n");
   printf("a|%d-%d-%d|\n", x ,x ,x);
   printf("b|%d -%d -%d|\n", x ,x ,x);
   printf("C\n");
   printf("a|%f|\n", y);
   printf("b|%f |\n", y);
   printf("D\n");
   printf("a|%f,%f|\n", y, y);
   printf("b|%f, %f|\n", y, y);

   return 0;
}

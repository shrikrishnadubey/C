//printf display float variable x in formats
#include<stdio.h>
int main()
{
   float x;
   printf("Enter the Number:");
   scanf("%f", &x);


    printf("a|%-8.1e|\n", x);
    printf("b|%10.6e|\n", x);
    printf("c|%-8.3f|\n", x);
    printf("d|%6f|\n\n", x);

    return 0;
}

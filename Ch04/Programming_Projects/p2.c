// print number with reversed digits
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a two digit number:");
    scanf("%d", &n);
    printf("\nNumber in reversed digit: %d%d%d \n", n % 10, ( n / 10) % 10, n / 100);
    return 0;
}

//test scanf ability to match pattern
//add two fraction seperated by + sign 
#include<stdio.h>
int main()
{
 int num1, denom1, num2, denom2, result_num, result_denom;

 printf("Enter the Fraction seperated by the plus sign: \n");
 scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

 result_num = num1 * denom2 + num2 * denom1;
 result_denom = denom1 * denom2;
 printf("The sum is %d/%d\n", result_num, result_denom);

 return 0;
}


/*
Enter the Fraction seperated by the plus sign: 
5/6+3/4
The sum is 38/24
*/

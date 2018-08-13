//behaviour of operators in c
#include<stdio.h>
int main()
{
    int a, b, c;
    float i;
    
    //it will give float
    i=9+2.5f;
    printf("%.1f\n", i);
    
    //give int by droping decimal part completely
    a=6.5/2;
   
    printf("%d\n", a);
    // % operator require operand to be integer only float won't compile
    // 0 as the right operand for both / and % program won't compile
     
    // c99 result of division always trancate toward 0
    b=-9/7;
    printf("%d\n", b);

    // i%j has same sign as i
    c=-9%7;
    printf("%d\n", c);

    return 0;
}

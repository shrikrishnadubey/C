// This program takes telephone number in form of (xxx) xxx-xxxx and print it in form of xxx.xxx.xxxx

#include<stdio.h>
int main()
{
    int a, b, c;

    printf("Enter the Telephone Number: \n");
    scanf("(%d)%d-%d", &a, &b, &c);
    printf("You entered the Number: %d.%d.%d\n", a, b, c);
    
    return 0;
}


/*
Enter the Telephone Number: 
(404)817-6900
You entered the Number: 404.817.6900
*/

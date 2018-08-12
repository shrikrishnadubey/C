// take date in mm/dd/yyyy format and display it in yyyymmdd
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the Date(mm/dd/yyyy): ");
    scanf("%d/%d/%d", &a, &b, &c);
    printf("You entered the date(yyyy-mm-dd): %d-%02d-%02d\n", c, a, b);

    return 0;

}


//here we want to display day and month in 2 digit for float we can do that by %.2f but in case of integer we need to add %02d to print it in 2 digit format if we enter 1 it will convert it to 01 but or 12 it will print 12 as it is//

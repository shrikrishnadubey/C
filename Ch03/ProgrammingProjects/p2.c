//program that format the product in formation provided by use
#include<stdio.h>
int main()
{
    int in, a, b,c;
    float up;
    printf("Enter Item Number: \n");
    scanf("%d", &in);
    
    printf("Enter Unit Price: \n");
    scanf("%f", &up);
    
    printf("Enter Purchase Date(mm/dd/yyyy): \n");
    scanf("%d/%d/%d", &a, &b, &c);
    
    printf("ITEM\t\t\tUNIT\t\t\tPurchase\n");
    printf("\t\t\tPrice\t\t\tDate\n");
    printf("%d\t\t\t%.2f\t\t\t%02d/%02d/%d\n", in, up, a, b, c);
    return 0;
}

/* Output: 
Enter Item Number:
583
Enter Unit Price:
13.5
Enter Purchase Date(mm/dd/yyyy):
10/24/2010
ITEM			UNIT			Purchase
			    Price			Date
583			    13.50			10/24/2010
*/

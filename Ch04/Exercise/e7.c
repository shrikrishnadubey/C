// Computes a Universal Product Code Check 
// by using diffrent formula
#include<stdio.h>
int main()
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;

    printf("Enter the fist (single) digit : ");
    scanf("%d", &d);
    printf("\nEnter the first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    printf("\nEnter the second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
    
    first_sum = d+i2+i4+j1+j3+j5;
    second_sum = i1+i3+i5+j2+j4;
    total = 3 * first_sum + second_sum;
     
    printf("\nCheck Digit: %d\n", 10 -((total % 10)));

    return 0;
}

/*
Enter the fist (single) digit : 0

Enter the first group of five digits: 13800

Enter the second group of five digits: 15173

Check Digit: 5

Answer is still the same 
*/

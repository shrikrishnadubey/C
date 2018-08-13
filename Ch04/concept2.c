// Concept of increment and decrement operators
#include<stdio.h>
int main()
{
    int i, j, k; 
        
    i = 1;
    printf("i is %d\n", ++i);
    printf("\ni is %d\n", i);

    i = 1;
    printf("\ni is %d\n", i++);
    printf("\ni is %d\n", i);
   
    i = 2;
    printf("\ni is %d\n", --i);
    printf("\ni is %d\n", i);

    i = 2;
    printf("\ni is %d\n", i--);
    printf("\ni is %d\n", i);

    i = 1;
    j = 2;
    k = ++i + j++;
    printf("\ni is %d,j is %d,k is %d", i, j, k);

    i = 1;
    j = 2;
    k = i++ + j++;
    printf("\ni is %d,j is %d,k is %d\n", i, j, k);

    return 0;
}

/*
 
i is 2

i is 2

i is 1

i is 2

i is 1

i is 1

i is 2

i is 1

i is 2,j is 3,k is 4
i is 2,j is 3,k is 3

*/

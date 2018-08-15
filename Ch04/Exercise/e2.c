//(-i)/j and -(i/j) have same answer or not
#include<stdio.h>
int main()
{
    int i, j;
     
    i = 5; j = 3;
    printf("value of i: %d\nvalue of j: %d\n", i, j);
    printf("%d\n", (-i) / j);
    printf("%d\n", -(i / j));

    return 0;

}

// C99: yes both will give the same result because round will fetch -1.(rounded down)
// C89: no both will give diffrent result based on operation because round off will fetch -1 and -2.(rounded up or down)

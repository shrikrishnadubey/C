//Take 16 number from the user show it in 4x4 square and calculate the sum of Column, Rows and Diagonal to show if it's a magic square or not.
#include<stdio.h>
int main()
{
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;

    printf("Enter 16 Number in any order with consecutive spaces: \n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);

    printf("\t\t%d\t\t%d\t\t%d\t\t%d\n", a, b, c, d);
    printf("\t\t%d\t\t%d\t\t%d\t\t%d\n", e, f, g, h);
    printf("\t\t%d\t\t%d\t\t%d\t\t%d\n", i, j, k, l);
    printf("\t\t%d\t\t%d\t\t%d\t\t%d\n", m, n, o, p);
    
    printf("Rows Sums: \t%d\t\t%d\t\t%d\t\t%d\n", a+b+c+d, e+f+g+h, i+j+k+l, m+n+o+p);
    printf("Column Sums:\t%d\t\t%d\t\t%d\t\t%d\n", a+e+i+m, b+f+j+n, c+g+k+o, d+h+l+p);
    printf("Diagonal Sums: %d\t\t%d\n", a+f+k+p, d+g+j+m);

    return 0;

}

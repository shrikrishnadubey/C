//This program is used to breakdown ISBN number written behind books to identify the book.
#include<stdio.h>
int main()
{
    int gp, gi, pc, in, cd;

    printf("Enter the ISBN Number to get details: \n");
    scanf("%d-%d-%d-%d-%d", &gp, &gi, &pc, &in, &cd);

    printf("ISBN Number provided by You: %d-%d-%d-%d-%d\n", gp, gi, pc, in, cd);
    printf("GSI Prefix: %d\n", gp);
    printf("Group Identifiers: %d\n", gi);
    printf("Publisher Code: %d\n",pc);
    printf("Item Number: %d\n", in);
    printf("Check Digit: %d\n", cd);

    return 0;
}


/*
Enter the ISBN Number to get details: 
978-0-393-97950-3
ISBN Number provided by You: 978-0-393-97950-3
GSI Prefix: 978
Group Identifiers: 0
Publisher Code: 393
Item Number: 97950
Check Digit: 3
*/

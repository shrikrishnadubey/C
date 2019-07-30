/* Some calculators (notably those from Hewlet-Packard) use a system of writing
 * mathematical expressions known as Reverse Polish Notation (RPN). In this
 * notation, operators are placed after those operands instead of between their
 * operands. For example, 1 + 2 would be written 1 2 + in RPN, and
 * 1 + 2 * 3 would be written 1 2 3 * +. RPN expressions can easily be evaluated
 * using a stack. The algorithm involves reading the operators and operands in
 * an expression from left to right, performing the following actions:
 *
 *     When an operand is encountered, push it onto the stack.
 *
 *     When an operator is encountered, pop its operands from the stack, perform
 *     the operation on those operands, and then push the result onto the stack.
 *
 * Write a program that evaulates RPN expressions. The operands will be
 * single-digit integers. The operators are +, -, *, /, and =. The = operator
 * causes the top stack item to be displayed; afterwards, the stack is cleared
 * and the user is prompted to enter another expression. The process continues
 * until the user enters a character that is not an operator or operand:
 *
 * Enter an RPN expression: 1 2 3 * + =
 * Value of expression: 7
 * Enter an RPN expression: 5 8 * 4 9 - / =
 * Value of expression: -8
 * Enter an RPN expression: q
 *
 * If the stack overflows, the program will display the message Expression is
 * too complex and terminate. If the stack underflows (because of an expression
 * such as 1 2 + +), the program will display the message Not enough operands in
 * expression and terminate. Hints: Incorporate the stack code from Section 10.2
 * into your program. Use scanf(" %c", &ch) to read the operators and operands.
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> /* C99 only */
#include "stack.h"

void evaluate_expression(void);

int main(void)
{
    for (;;)
    {
        printf("\nEnter an expression: ");
        evaluate_expression();
        printf("Value of expression: %d", pop());
    }
    return 0;
}

void evaluate_expression(void)
{
    char input;
    int operandA, operandB;

    for (;;)
    {
        scanf(" %c", &input);
        switch(input)
        {
            case '+': case '-': case '*': case '/':
                operandB = pop();
                operandA = pop();
        }
        if (input >= '0' && input <= '9')
            push(input - '0');
        else if (input == '+')
            push(operandA + operandB);
        else if (input == '-')
            push(operandA - operandB);
        else if (input == '*')
            push(operandA * operandB);
        else if (input == '/')
            push(operandA / operandB);
        else if (input == '=')
            break;
        else
        {
            printf("\n");
            exit(EXIT_SUCCESS);
        }
    }
    if (top > 1)
    {
        printf("Too many operands in expression\n\n");
        exit(EXIT_FAILURE);
    }
}


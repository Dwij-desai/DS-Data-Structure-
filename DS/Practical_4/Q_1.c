#include <stdio.h>
#include <ctype.h>

#define Dwij 100
char stack[Dwij];
int top = -1;
char expression[Dwij];
char *e;

void push(char);
char pop();
int priority(char);
void infixToPostfix();

int main()
{
    printf("Enter the expression: ");
    scanf("%s", expression);
    printf("\n");

    e = expression;
    infixToPostfix();

    return 0;
}

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    if (top == -1)
        return -1;
    else
        return stack[top--];
}

int priority(char x)
{
    if (x == '(')
        return 0;
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    return 0;
}

void infixToPostfix()
{
    char x;

    while (*e != '\0')
    {
        if (isalnum(*e))
            printf("%c ", *e);
        else if (*e == '(')
            push(*e);
        else if (*e == ')')
        {
            while ((x = pop()) != '(')
                printf("%c ", x);
        }
        else
        {
            while (top != -1 && priority(stack[top]) >= priority(*e))
                printf("%c ", pop());
            push(*e);
        }
        e++;
    }

    while (top != -1)
    {
        printf("%c ", pop());
    }
}

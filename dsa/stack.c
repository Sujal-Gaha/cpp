#include <stdio.h>

const int MAXSIZE = 100;

int stack[MAXSIZE];
int top = -1;

void push(int element)
{
    if (top == MAXSIZE - 1)
    {
        printf("Stack Overflow!");
    }
    else
    {
        top++;
        stack[top] = element;
        printf("Pushed %d into the stack\n", element);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow!");
    }
    else
    {
        int item = stack[top];
        top--;
        printf("Popped %d from the stack\n", item);
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    while (top != -1)
    {
        pop();
    }
}
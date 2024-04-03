#include <stdio.h>

const int MAXSIZE = 5;

int queue[MAXSIZE];
int front = -1;
int rear = -1;

void enqueue(int element)
{
    if (rear == MAXSIZE - 1)
    {
        printf("Queue Overflow!\n");
        return;
    }
    if (front == -1)
    {
        front = 0;
    }
    rear++;
    queue[rear] = element;
    printf("Enqueued %d to the queue\n", element);
}

void dequeue()
{
    if (front == -1)
    {
        printf("Queue Underflow!\n");
    }
    int item = queue[front];
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front++;
    }
    printf("Dequeued %d from the queue\n", item);
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    while (front != -1)
    {
        dequeue();
    }
}
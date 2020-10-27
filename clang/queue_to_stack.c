#include <stdio.h>

#define SIZE 20
void q_insert(int data);
void q_insert_aux(int data);
int q_delete();
int q_delete_aux();
void push(int);
int pop();

int que[SIZE], rear = -1, front = -1;
int que_aux[SIZE], rear_aux = -1, front_aux = -1;

int main(void)
{
    push(5);
    push(6);
    push(7);
    printf("%d ", pop());
    printf("%d ", pop());
    printf("%d ", pop());
}

void push(int data)
{
    q_insert(data);
}

int pop()
{
    while(front != rear)
    {
        q_insert_aux(q_delete());
    }
    int temp = q_delete();
    while(front_aux != -1 && rear_aux != -1)
    {
        q_insert(q_delete_aux());
    }

    return temp;
}
void q_insert(int data)
{
    if(rear == SIZE)
    {
        printf("overflow");
        return;
    }
    else if(rear == -1 && front == -1)
        rear = front = 0;
    else
        rear = rear + 1;
    que[rear] = data;
}


int q_delete()
{
    int temp;
    if(rear == -1 && front == -1)
    {
        printf("underflow -> ");
        return -1;
    }
    else if(rear == front)
    {
        temp = que[front];
        rear = front = -1;
    }
    else
    {
        temp = que[front];
        front = front + 1;
    }
    return temp;
}

void q_insert_aux(int data)
{
    if(rear_aux == SIZE)
    {
        printf("overflow");
        return;
    }
    else if(rear_aux == -1 && front_aux == -1)
        rear_aux = front_aux = 0;
    else
        rear_aux = rear_aux + 1;
    que[rear_aux] = data;
}


int q_delete_aux()
{
    int temp;
    if(rear_aux == -1 && front_aux == -1)
    {
        printf("underflow -> ");
        return -1;
    }
    else if(rear_aux == front_aux)
    {
        temp = que[front_aux];
        rear_aux = front_aux = -1;
    }
    else
    {
        temp = que[front_aux];
        front_aux = front_aux + 1;
    }
    return temp;
}

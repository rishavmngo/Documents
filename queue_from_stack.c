#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define size 20
void push_i(int);
int pop_i();
void push_r(int);
int pop_r();
void enqueue(int);
int dequeue();

int stack_i[size],top_i = -1;
int stack_r[size],top_r = -1;

int main(void)
{
    enqueue(5);
    enqueue(4);
    enqueue(8);
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    enqueue(1);
    printf("%d\n", dequeue());

} 

void enqueue(int data)
{
    push_i(data);
}

int dequeue()
{
    while(top_i != -1)
        push_r(pop_i());

    int return_ =  pop_r();

    while(top_r != -1)
        push_i(pop_r());

    return return_;
}

void push_i(int data)
{
    if(top_i == (size - 1))
    {
        return;
    }
    top_i = top_i + 1;
    stack_i[top_i] = data;
}

int pop_i()
{
    if(top_i == -1)
    {
        return -1;
    }

    return stack_i[top_i--];
}

void push_r(int data)
{
    if(top_r == (size - 1))
    {
        return;
    }
    top_r = top_r + 1;
    stack_r[top_r] = data;
}

int pop_r()
{
    if(top_r == -1)
    {
        return -1;
    }

    return stack_r[top_r--];
}


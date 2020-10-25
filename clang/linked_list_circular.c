#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* last;

void insert_at_head(int);
void print();
int main(void)
{
    last = NULL;
    insert_at_head(5);
    insert_at_head(6);
    insert_at_head(1);
    insert_at_head(2);
    print();
}

void insert_at_head(int input)
{
    struct node* temp = malloc(sizeof(struct node));
    temp->data = input;

    if(last == NULL)
    {
        temp->next = temp;
        last = temp;
        return;
    }

    temp->next = last->next;
    last->next = temp;
}

void print()
{
    struct node* temp = last->next;

    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }while(temp != last->next);
}

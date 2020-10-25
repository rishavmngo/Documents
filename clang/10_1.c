#include <stdio.h>
#include <stdbool.h>

#define size 100

bool is_empty();
bool is_full();
char pop();
char top();
void push(char input);



char stack[size];
int Top = -1;

int main()
{
    bool check = false;
    char input, rem;
    printf("Enter the braces: ");

    while ((input = getchar()) != '\n')
    {
        if(input == '{' || input == '(')
        {
            check = true;
            push(input);
        }
        else if(input == '}' || input == ')')
        {
            rem = pop();

            if (rem == '(' && input == ')') ;
            else if (rem == '{' && input == '}') ;
            else if (is_empty())
                check = false;
            else
                break;
        }
    }
    if(is_empty() && check)
        printf("matching paranthesis");
    else
        printf("Not matching paranthesis");

    return 0;
}



bool is_empty()
{
    return Top == -1;
}

bool is_full()
{
    return Top == size - 1;
}

void push(char input)
{
    if(is_full())
    {
        printf("Stack is full");
    }
    else
    {
        Top = Top + 1;
        stack[Top] = input;
    }
}

char pop()
{
    if(is_empty()) ;
        //printf("Stack is empty");
    else
        return stack[Top--];
}

char top()
{
    if(!is_empty())
        return stack[Top];
    
}

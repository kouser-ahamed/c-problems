#include <stdio.h>
#include <stdlib.h>
#define max 100

int s[max];
int top = -1;
void push(int s[], int data)
{
    if (top == max - 1)
    {
        printf("Stack overflow\n");
        return 0;
    }
    else
    {
        top++;
        s[top] = data;
    }
}
int pop(int s[])
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return 0;
    }
    else
    {
        int x = s[top];
        top--;
        return x;
    }
}

int main()
{
    push(s, 7);
    push(s, 8);
    push(s, 9);
    printf("After Pushing: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", s[i]);
    }
    printf("\n");
    pop(s);
    printf("After 1st Pop: ");
    for (int i = 0; i < 2; i++)
    {
        printf("%d ", s[i]);
    }
    printf("\n");
    pop(s);
    printf("After 2nd pop: ");
    for (int i = 0; i < 1; i++)
    {
        printf("%d ", s[i]);
    }
    printf("\n");
    return 0;
}

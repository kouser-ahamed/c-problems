#include<stdio.h>
#include<stdlib.h>

struct employee
{
    int info;
    struct employee * next;
};
void linkedListEmployee(struct employee *ptr)
{
    while(ptr != NULL)
    {
        printf("Element: %d\n", ptr->info);
        ptr = ptr->next;
    }
}
int main()
{
    struct emplyoee * head;
    struct emplyoee * second;
    struct emplyoee * third;
    struct emplyoee * fourth;
    
    head = (struct emplyoee *) malloc(sizeof(struct emplyoee));
    second = (struct emplyoee *) malloc(sizeof(struct emplyoee));
    third = (struct emplyoee *) malloc(sizeof(struct emplyoee));
    fourth= (struct emplyoee *) malloc(sizeof(struct emplyoee));

    head->info = 7;
    head->next= second;

    second->info = 11;
    second->next= third;

    third->info = 17;
    third->next= fourth;

    fourth->info = 66;
    fourth->next = NULL;
    linkedListEmployee(head);

    return 0;
}

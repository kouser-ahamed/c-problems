/*#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));

    head->data=7;
    head->next=second;

    second->data=10;
    second->next=third;

    third->data=15;
    third->next=NULL;

    return 0;
}*/

/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;

};

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    head->data=9;
    head->next=second;

    second->data=10;
    second->next=third;

    third->data=16;
    third->next=NULL;

    return 0;

}*/

/*#include<stdio.h>
#include<stdlib.h>

struct loved
{
    int data;
    struct loved *next;
};

void LinkListTraversal(struct loved *ptr)
{
    while(ptr !=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}

int main()
{
    struct loved *kouser;
    struct loved *shaida;
    struct loved *faruk;

    kouser=(struct loved*)malloc(sizeof(struct loved));
    shaida=(struct loved*)malloc(sizeof(struct loved));
    faruk=(struct loved*)malloc(sizeof(struct loved));

    kouser->data=100;
    kouser->next=shaida;

    shaida->data=101;
    shaida->next=faruk;

    faruk->data=0;
    faruk->next=NULL;

      LinkListTraversal(kouser);

    return 0;

}*/

/*#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;

};

void linklist(struct node *ptr)
{
    while(ptr !=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}

int main()
{
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;

    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    fifth=(struct node*)malloc(sizeof(struct node));

    first->data=100;
    first->next=second;

    second->data=200;
    second->next=third;

    third->data=300;
    third->next=fourth;

    fourth->data=400;
    fourth->next=fifth;

    fifth->data=500;
    fifth->next=NULL;
    
    linklist(first);

    return 0;

}*/

/*#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linklist(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    struct node *first;
    struct node *second;
    struct node *third;

    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    first->data=111;
    first->next=NULL;

    second->data=222;
    second->next=first;

    third->data=333;
    third->next=second;

    linklist(third);

    return 0;
}*/

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;

};
void linklist(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    struct node *first;
    struct node *second;
    struct node *third;

    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    first->data=111;
    first->next=second;

    second->data=222;
    second->next=third;

    third->data=333;
    third->next=NULL;

    linklist(first);

    return 0;
}
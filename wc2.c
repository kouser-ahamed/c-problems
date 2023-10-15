#include <stdio.h> 
#include <stdlib.h> 
typedef struct employee 
{ 
    int info; 
    struct employee *next; 
} emp; 
 
int main() 
{ 
    emp *emp1 = NULL; 
    emp *emp3 = NULL; 
    emp *emp5 = NULL; 
    emp *emp7 = NULL; 
    emp1=(emp*)malloc(sizeof(emp)); 
    emp3=(emp*)malloc(sizeof(emp)); 
    emp5=(emp*)malloc(sizeof(emp)); 
    emp7=(emp*)malloc(sizeof(emp)); 
    emp1->next=emp3; 
    emp3->next=emp5; 
    emp5->next=emp7; 
    emp7->next=NULL; 
    emp1->info=10; 
    emp3->info=30; 
    emp5->info=50; 
    emp7->info=70; 
    printf("Before Inserting and Deleting: "); 
    emp *c=emp1; 
    while(c!=NULL) 
    { 
        printf("%d ",c->info); 
        c=c->next; 
    } 
    printf("\n"); 
//INSERTING NODE 2,4,6 
    emp *emp2 = NULL; 
    emp2=(emp*)malloc(sizeof(emp)); 
    emp *emp4 = NULL; 
    emp4=(emp*)malloc(sizeof(emp)); 
    emp *emp6 = NULL; 
    emp6=(emp*)malloc(sizeof(emp)); 
    emp2->next=emp3; 
    emp1->next=emp2; 
    emp4->next=emp5; 
    emp3->next=emp4; 
    emp6->next=emp7; 
    emp5->next=emp6; 
    emp2->info=20; 
    emp4->info=40; 
    emp6->info=60; 
    printf("After inserting: "); 
    c=emp1; 
    while(c!=NULL) 
    { 
        printf("%d ",c->info); 
        c=c->next; 
    } 
    printf("\n"); 
//DELETING NODE 1,5,7 
    emp1->next=NULL; 
    emp4->next=emp6; 
    emp5->next=NULL; 
    emp6->next=NULL; 
    free(emp1); 
    free(emp5); 
    free(emp7); 
    printf("After deleting: "); 
    c=emp2; 
    while(c!=NULL) 
    { 
        printf("%d ",c->info); 
        c=c->next; 
    } 
}

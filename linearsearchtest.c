#include<stdio.h>
void search(int A[],int x)
{
    int c=0;
    for(int i=0;i<5;i++)
    {
        if(A[i]==x)
        {
            printf("Element %d found at index %d\n",x,i);
            c++;
        }
    }
    if(c==0)
    {
        printf("Element not found\n");
        
    }
    if(c>0)
    {
        printf("Element are %d times.\n",c);
    }
    
}
int main()
{
    int i,x;
    int A[5];
    printf("Enter the value of the array: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the element you want to find: ");
    scanf("%d",&x);
    search(A,x);
}
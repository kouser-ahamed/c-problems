#include<stdio.h>
void search(int A[],int x, int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]==x)
        {
            printf("Element %d found at index %d\n",x,i);
            c++;
        }
    }
    if(C==0)
    {
        printf("Element not found\n");
        
    }
}
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int A[n];
    printf("Enter the value of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the element you want to find: ");
    scanf("%d",&x);
    
    
}
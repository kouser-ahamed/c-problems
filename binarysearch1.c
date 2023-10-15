
/*Ascending order*/

/*#include<stdio.h>
int binary_search(int A[],int n,int searchitem)
{
    int L= 0;
    int R= n-1;
    int c=0;
    while(L<=R)
    {
        int m=(L+R)/2;
        c++;
        if(A[m]<searchitem)
        {
            L=m+1;
            
        }
        else if(A[m]>searchitem)
        {
            R=m-1;
            
        }
        else
        {
            printf("%d time the has runed\n",c);
            return m;
        }
        
    }
    
    return-1;
}

int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter the elements of the array in ascending order:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int searchitem;
    printf("Enter the item for search: ");
    scanf("%d",&searchitem);
    int result= binary_search(arr,n,searchitem);
    
    if(result!=-1)
    {
        printf("Item found at index %d\n",result);
    }
    else
    {
        printf("Item not found\n");
    } 
    return 0;
}*/





/*Descending order*/
#include<stdio.h>
int binary_search(int A[],int n,int searchitem)
{
    int L= 0;
    int R= n-1;
    int c=0;
    while(L<=R)
    {
        int m=(L+R)/2;
        c++;
        if(A[m]>searchitem)
        {
            L=m+1;
            
        }
        else if(A[m]<searchitem)
        {
            R=m-1;
            
        }
        else
        {
            printf("%d time the has runed\n",c);
            return m;
        }
        
    }
    
    return-1;
}

int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter the elements of the array in ascending order:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int searchitem;
    printf("Enter the item for search: ");
    scanf("%d",&searchitem);
    int result= binary_search(arr,n,searchitem);
    
    if(result!=-1)
    {
        printf("Item found at index %d\n",result);
    }
    else
    {
        printf("Item not found\n");
    } 
    return 0;
}




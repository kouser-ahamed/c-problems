#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of element: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d element: \n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }

    printf("Print stored elements: ");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }

    return 0;

}
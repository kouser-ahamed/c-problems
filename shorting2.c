#include<stdio.h>
#include<conio.h>
int sort(int *a,int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)

    {
        if(a[j]>a[j+1])
    {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
    }
    }
}
}
print(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
int main()
{
    int a[10000],i,n,key;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    printf("Enter the element in array: ");
   {
    scanf("%d",&a[i]);
   }
   sort(a,n);
   print(a,n);

}
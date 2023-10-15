#include<stdio.h>
int fun(int n1)
{
    if(n1==0)
    return 0;
    return (n1%10) + fun(n1/10);

}
int main()
{
    int n1=47;
    int n=fun(n1);
    printf("%d",n);
}
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    double Y;
    scanf("%d %d %d",&a, &b, &c);
    
    Y = pow(a, 25.0/15.0)+pow(b,c+3.0);
    printf("%2lf\n",Y);
    
    return 0;
}
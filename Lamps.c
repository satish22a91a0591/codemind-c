#include<stdio.h>
int main()
{
    int n,k,x,y;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    int a=k*x+(n-k)*y;
    if(x<y)
    {
        printf("%d",n*x);
    }
    else
    {
    printf("%d",a);
    }
}
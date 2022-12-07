#include<stdio.h>
int main()
{
    int n,rem,sum=0;
    scanf("%d",&n);
    int t=n*n;
    while(t!=0)
    {
        rem=t%10;
        sum=sum+rem;
        t=t/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}
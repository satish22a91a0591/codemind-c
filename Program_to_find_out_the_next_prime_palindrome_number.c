#include<stdio.h>
int prime(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int pal(int n)
{
    int t=n,r,rv=0;
    while(n!=0)
    {
        r=n%10;
        rv=rv*10+r;
        n=n/10;
    }
    if(rv==t)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n+1;;i++)
    {
        if(prime(i)&&pal(i))
        {
            printf("%d",i);
            break;
        }
        
    }
}
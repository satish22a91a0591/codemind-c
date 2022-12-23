#include<stdio.h>
int pal(int n)
{
    int t=n;
    int r,rv=0;
    while(n>0)
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
    int n,f,b;
    scanf("%d",&n);
    for(int i=n+1;;i++)
    {
        if(pal(i))
        {
            f=i;
            break;
        }
    }
    for(int i=n-1;;i--)
    {
        if(pal(i))
        {
            b=i;
            break;
        }
    }
    int d1=f-n;
    int d2=n-b;
    if(d1<d2)
    {
        printf("%d",f);
    }
    else if(d2<d1)
    {
        printf("%d",b);
    }
    else if(d1==d2)
    {
        printf("%d %d",b,f);
    }
}
#include<stdio.h>
int fib(int n)
{
    int a,b;
    a=0;
    b=1;
    int c=a+b;
    while(n>c)
    {
        a=b;
        b=c;
        c=a+b;
    }
    if(c==n)
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
    int n,back,forw;
    scanf("%d",&n);
    for(int i=n;;i++)
    {
        if(fib(i))
        {
            forw=i;
            break;
        }
    }
    for(int i=n-1;;i--)
    {
        if(fib(i))
        {
            back=i;
            break;
        }
    }
    int d1=forw-n;
    int d2=n-back;
    if(d1==d2)
    {
        printf("%d %d",back,forw);
    }
    else if(d1>d2)
    {
        printf("%d",back);
    }
    else
    {
        printf("%d",forw);
    }
}
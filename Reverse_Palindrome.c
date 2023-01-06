#include<stdio.h>
int pal(int n)
{
    int r,rv=0;
    while(n!=0)
    {
        r=n%10;
        rv=rv*10+r;
        n=n/10;
    }
    return rv;
}
int main()
{
    int n;
    scanf("%d",&n);
    n=n+pal(n);
    while(n!=pal(n))
    {
        n=n+pal(n);
    }
    printf("%d",n);
}
#include<stdio.h>
int pal(int n)
{
    int t=n,r,rem=0;
    while(n!=0)
    {
        r=n%10;
        rem=rem+r;
        n=n/10;
    }
    return rem;
}
int main()
{
    int n,b,c;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int res=0;
    for(int i=0;i<n;i++)
    {
        c=pal(a[i]);
        res=res+c;
    }
    printf("%d",res);
}
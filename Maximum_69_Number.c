#include<stdio.h>
int main()
{
    int n,r,c=0;
    scanf("%d",&n);
    int t=n;
    while(n!=0)
    {
        r=n%10;
        c++;
        n=n/10;
    }
    int tem=c;
    int a[c];
    while(t!=0)
    {
        r=t%10;
        // printf("%d ",r);
        a[c]=r;
        c--;
        t=t/10;
    }
    for(int i=1;i<=tem;i++)
    {
        if(a[i]==6)
        {
            a[i]=9;
            break;
        }
    }
    for(int i=1;i<=tem;i++)
    {
        printf("%d",a[i]);
    }
}
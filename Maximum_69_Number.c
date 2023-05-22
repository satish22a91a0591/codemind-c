#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int t=n,r,c=0;
    while(n!=0)
    {
        r=n%10;
        c++;
        n=n/10;
    }
    int a[c],cnt=0;
    while(t!=0)
    {
        r=t%10;
        a[c-1]=r;
        c--;
        cnt++;
        t=t/10;
    }
    for(int i=0;i<cnt;i++)
    {
        if(a[i]==6)
        {
            a[i]=9;
            break;
        }
    }
    for(int i=0;i<cnt;i++)
    {
        printf("%d",a[i]);
    }
}
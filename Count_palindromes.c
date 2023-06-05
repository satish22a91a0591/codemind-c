#include<stdio.h>
int pal(int n)
{
    int t=n,r,rem=0;
    while(n!=0)
    {
        r=n%10;
        rem=rem*10+r;
        n=n/10;
    }
    if(rem==t)
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
    int n,b,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(pal(a[i]))
        {
            c++;
        }
    }
    printf("%d",c);
}
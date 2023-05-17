#include<stdio.h>
int main()
{
    int n,sm=0,s=0;
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n/2;i++)
    {
        s=s+a[i];
    }
    for(int i=(n/2)+1;i<=n;i++)
    {
        sm=sm+a[i];
    }
    printf("%d",sm-s);
}
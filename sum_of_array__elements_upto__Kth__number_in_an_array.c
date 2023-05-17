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
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        s=s+a[i];
    }
    printf("%d",s);
}
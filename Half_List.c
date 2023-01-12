#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b;
    scanf("%d",&b);
    for(int i=n;i>n/2;i--)
    {
        printf("%d ",a[i]);
    }
    for(int i=1;i<=n/2;i++)
    {
        printf("%d ",a[i]);
    }
}
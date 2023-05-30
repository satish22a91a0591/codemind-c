#include<stdio.h>
int main()
{
    int n,max;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>=max)
        {
            max=a[i];
        }
    }
    max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>=max)
        {
            max=a[i];
        }
    }
    printf("%d",max);
}
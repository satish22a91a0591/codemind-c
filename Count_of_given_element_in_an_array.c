#include<stdio.h>
int main()
{
    int n,max=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int t;
    scanf("%d",&t);
    for(int i=0;i<n;i++)
    {
        if(a[i]==t)
        {
            max++;
        }
    }
    printf("%d",max);
}
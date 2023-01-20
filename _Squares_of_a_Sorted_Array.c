#include<stdio.h>
int main()
{
    int n,max=0,b,c;
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&c);
        a[i]=c*c;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1+i;j<=n;j++)
        {
            if(a[j]<a[i])
            {
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
        printf("%d ",a[i]);
    }
}
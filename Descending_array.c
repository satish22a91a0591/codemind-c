#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int a[n];
    a[0]=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]>a[i+1])
        {
            c++;
        }
    }
    if(c==n)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
}
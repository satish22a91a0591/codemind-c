#include<stdio.h>
int main()
{
    int n,f=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        f++;
    }
    int b,c,count=0;
    scanf("%d%d",&b,&c);
    for(int i=0;i<n;i++)
    {
        if(a[i]>=b&&a[i]<=c)
        {
           count++; 
        }
        else
        {
            printf("%d ",a[i]);
        }
    }
    if(count==n)
    {
        printf("-1");
    }
    
    
}
#include<stdio.h>
int main()
{
    int  n;
    scanf("%d",&n);
    int a[n],s=0,sm=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s=s+a[i];
        }
        else
        {
            sm=sm+a[i];
        }
    }
    if(s>sm)
    {
        printf("%d",s-sm);
    }
    else
    {
        printf("%d",sm-sm);
    }
}
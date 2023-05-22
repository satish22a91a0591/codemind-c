#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],s=0,j;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                break;
            }
        }
        if(j==n)
        {
            a[s]=a[i];
            s++;
        }
    }
    int sm=0;
    for(int i=0;i<s;i++)
    {
        sm=sm+a[i];
    }
    printf("%d",sm);    
}
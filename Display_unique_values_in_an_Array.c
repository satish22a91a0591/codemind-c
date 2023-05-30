#include<stdio.h>
int main()
{
    int n,t=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c==1)
        {
            printf("%d ",a[i]);
            t=1;
        }
    }
    if(t==0)
    {
        printf("-1");
    }
    
}
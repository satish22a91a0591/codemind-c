#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x,c=0,flag=0;
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c==x)
        {
            printf("%d ",a[i]);
            flag=1;
            for(int k=0; k<n; k++)
           {
               a[i]=0;
           }
        }
    }
    if(flag==0)
    {
        printf("-1");
    }
}
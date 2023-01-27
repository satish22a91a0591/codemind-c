#include<stdio.h>
int main()
{
    int n,x=0,r,flag=1;
    scanf("%d",&n);
    int t=n;
    while(n!=0)
    {
        r=n%10;
        x++;
        n=n/10;
    }
    int a[x];
    for(int i=0;i<x;i++)
    {
        r=t%10;
        a[i]=r;
        t=t/10;
    }
    for(int i=0;i<x;i++)
    {
        for(int j=i+1;j<x;j++)
        {
            if(a[j]==a[i])
            {
                flag=0;
            }
        }
    }
    if(flag==1)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }

}
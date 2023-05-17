#include<stdio.h>
int prime(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,cn=0;
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(prime(a[i]))
        {
            cn++;
        }
    }
    printf("%d",cn);
}
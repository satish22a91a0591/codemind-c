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
    int n,r,rev=0;
    scanf("%d",&n);
    int t=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(prime(t)==1)
    {
        if(prime(rev)==1)
        {
            printf("circular prime");
        }
        else
        {
            printf("prime but not a circular prime");
        }
    }
    else
    {
        printf("not prime");
    }
    
}
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
    int a,b,f;
    scanf("%d%d",&a,&b);
    int c=a+b;
    for(int i=c+1;;i++)
    {
        if(prime(i))
        {
            f=i;
            break;
        }
    }
    printf("%d",f-c);
}
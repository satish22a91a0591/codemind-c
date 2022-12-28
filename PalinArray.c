#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a,r,rv=0;
        scanf("%d",&a);
        int t=a;
        while(a!=0)
        {
            r=a%10;
            rv=rv*10+r;
            a=a/10;
        }
        if(rv==t)
        {
            c++;
        }
    }
    if(c==n)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}
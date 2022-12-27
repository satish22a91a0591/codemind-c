#include<stdio.h>
int pal(int i)
{
    int t=i,r,rv=0;
    while(i!=0)
    {
        r=i%10;
        rv=rv*10+r;
        i=i/10;
    }
    if(rv==t)
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
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(pal(i))
        {
            printf("%d ",i);
        }
        
    }
}
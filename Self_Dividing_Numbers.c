#include<stdio.h>
int self(int i)
{
    int t=i,r;
    int c=0,count=0;
    while(i>0)
    {
        r=i%10;
        c++;
        if(r>0)
        {
            if(t%r==0)
        {
            count++;
        }
        }
        i=i/10;
    }
    if(c==count)
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
        if(self(i))
        {
            printf("%d ",i);
        }
    }
}
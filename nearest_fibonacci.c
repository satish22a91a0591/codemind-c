#include<stdio.h>
int main()
{
    int n,a=0,b=1,x=0,y=1,c,z,w,m;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
         if(a>n)
        {
            w=c-a;
            break;
        }
        c=a+b;
        a=b;
        b=c;
    }
    
    for(int j=1;j<=n;j++)
    {
        if(x>n)
        {
            m=x;
            break;
        }
        //printf("%d ",x);
        z=x+y;
        x=y;
        y=z;
    } 
    int d1=n-w;
    int d2=m-n;
    if(d1<d2)
    {
        printf("%d",w);
    }
    else if(d2<d1)
    {
        printf("%d",m);
    }
    else if(d1==d2)
    {
        printf("%d %d",w,m);
    }
    
}
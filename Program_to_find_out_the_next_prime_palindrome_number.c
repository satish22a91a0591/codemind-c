#include<stdio.h>
int prime(int a)
{
    int c=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
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
int rev(int i)
{
    int t=i;
    int rev=0,r;
    while(i!=0)
    {
        r=i%10;
        rev=rev*10+r;
        i=i/10;
    }
    if(rev==t)
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
        int x,f;
        scanf("%d",&x);
        for(int i=x+1;;i++)
        {
            if(prime(i))
            {
                if(rev(i))
                {
                        printf("%d",i);
                        break;
                    
                }
            }
        }
    //printf("%d",cnt);    
}
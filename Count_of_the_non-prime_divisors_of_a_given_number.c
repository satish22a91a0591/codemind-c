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
    if(c!=2)
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
        int x,cnt=0;
        scanf("%d",&x);
        for(int i=1;i<=x;i++)
        {
            if(x%i==0)
            {
                if(prime(i))
                {
                    cnt++;
                }
            }    
        }
    printf("%d",cnt);    
}
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
int main()
{
    
        int a,f,b;
        scanf("%d",&a);
        for(int i=a;;i++)
        {
            if(prime(i))
            {
                f=i;
                break;
            }
        }
        for(int i=a;;i--)
        {
            if(prime(i))
            {
                b=i;
                break;
            }
        }
        int d1=f-a;
        int d2=a-b;
        if(d1>=d2)
        {
            printf("%d
",d2);
        }
        else
        {
            printf("%d
",d1);
        }
    
}
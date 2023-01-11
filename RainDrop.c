#include<stdio.h>
int main()
{
    int n,a=0,b=0,c=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            if(i==7)
            {
                a=7;
            }
            else if(i==3)
            {
                b=3;
            }
            else if(i==5)
            {
                c=5;
            }
        }
        
    }
    int s=a+b+c;
    if(s==0)
    {
        printf("%d",n);
    }
    else if(s==7)
    {
        printf("Plong");
    }
    else if(s==8)
    {
        printf("PlingPlang");
    }
    else if(s==3)
    {
        printf("Pling");
    }
    else if(s==5)
    {
        printf("Plang");
    }
}
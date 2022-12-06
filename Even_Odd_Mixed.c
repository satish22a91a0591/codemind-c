#include<stdio.h>
int main()
{
    int n,c=0,rem,ec=0,oc=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        c=c+1;
        if(rem%2==0)
        {
            ec=ec+1;
        }
        else if(rem%2!=0)
        {
            oc=oc+1;
        }
        n=n/10;
    }
    if(c==ec)
    {
        printf("Even");
    }
    else if(c==oc)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}
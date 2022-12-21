#include<stdio.h>
int main()
{
    int n,s=0,r;
    scanf("%d",&n);
    int t=n;
    while(n>0)
    {
        int p=1;
        r=n%10;
        for(int i=1;i<=r;i++)
        {
            p=p*i;
        }
        s=s+p;
        n=n/10;
    }
    if(s==t)
    {
        printf("The number %d is a strong number",t);
    }
    else
    {
        printf("The number %d is not a strong number",t);
    }
}
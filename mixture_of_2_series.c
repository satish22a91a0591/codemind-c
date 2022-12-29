#include<stdio.h>
int main()
{
    int n,k1=0,k2=0;
    scanf("%d",&n);
    for(int i=1;i<=n+1;i++)
    {
        if(i%2!=0)
        {
           printf("%d ",k1);
           k1=k1+2;
        }
        else
        {
           printf("%d ",k2);
           k2++;
        }
    }
}
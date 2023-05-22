#include<stdio.h>
int main()
{
    int n,s=0,r;
    scanf("%d",&n);
    while(n>9)
    {
        r=n%10;
        n=n/10;
        n=n+r;
    }
    printf("%d",n);
}
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int n=b*c;
    if(a%n==0)
    {
        printf("%d",a/n);
    }
    else
    {
        printf("%d",(a/n)+1);
    }
}
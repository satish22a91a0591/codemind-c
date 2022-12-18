#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,r,rv=0,rem,rev=0;
    scanf("%d%d",&n,&a);
    int p=pow(10,a);
    int n1=n%p;
    while(n!=0)
    {
        r=n%10;
        rv=rv*10+r;
        n=n/10;
    }
    int p2=rv%p;
    while(p2!=0)
    {
        rem=p2%10;
        rev=rev*10+rem;
        p2=p2/10;
    }
    if(rev>n1)
    {
        printf("%d",rev-n1);
    }
    else
    {
        printf("%d",n1-rev);
    }
}
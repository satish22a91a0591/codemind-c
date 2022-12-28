#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sq=n*n;
    int t=n,r,rv=0;
    while(n>0)
    {
        r=n%10;
        rv=rv*10+r;
        n=n/10;
    }
    int sq2=rv*rv;
    int rem,rev=0;
    while(sq2!=0)
    {
        rem=sq2%10;
        rev=rev*10+rem;
        sq2=sq2/10;
    }
    if(rev==sq)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}

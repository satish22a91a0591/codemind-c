#include<stdio.h>
int main()
{
    int n,rem,rev=0;
    scanf("%d",&n);
    int t=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
#include<stdio.h>
int main()
{
    int a,rem,rev=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        int n;
        scanf("%d",&n);
    
    int t=n;
    int rem,rev=0;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==t)
    {
        printf("True
");
    }
    else
    {
        printf("False
");
    }
    }
}
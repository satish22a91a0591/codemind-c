#include<stdio.h>
int main()
{
    int n,rem,rem2,sum=0,sum2=0;
    scanf("%d",&n);
    //printf("%d",n);
    while(n>9)
    {
        rem=n%10;
        n=n/10;
        n=n+rem;
    }
    printf("%d",n);
    
}
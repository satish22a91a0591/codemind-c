#include<stdio.h>
#include<math.h>
int main()
{
    int n,c=0,sum=0,rem=0,r=0;
    scanf("%d",&n);
    int t=n;
    int temp=n;
    while(n!=0)
    {
        r=n%10;
        c++;
        n=n/10;
    }
    while(t!=0)
    {
        rem=t%10;
        sum=sum+pow(rem,c);
        c=c-1;
        t=t/10;
    }
    if(sum==temp)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}
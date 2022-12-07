#include<stdio.h>
#include<math.h>
int main()
{
    int n,rem,c=0;
    scanf("%d",&n);
    int temp=n;
    int t=n*n;
    while(n!=0)
    {
        rem=n%10;
        c=c+1;
        n=n/10;
    }
    int a=pow(10,c);
    int b=t%a;
    if(b==temp)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}
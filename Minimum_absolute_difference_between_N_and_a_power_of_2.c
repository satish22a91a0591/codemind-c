#include<stdio.h>
#include<math.h>
int main()
{
    int n,x=0;
    scanf("%d",&n);
    int i=1;
    while(x<=n)
    {
        x=pow(2,i);
        i++;
    }
    int f=x;
    int b=f/2;
    int d1=f-n;
    int d2=n-b;
    if(d1>=d2)
    {
        printf("%d",d2);
    }
    else if(d2>d1)
    {
        printf("%d",d1);
    }
}
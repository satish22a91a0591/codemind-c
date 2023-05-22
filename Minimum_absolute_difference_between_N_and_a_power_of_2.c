#include<stdio.h>
#include<math.h>
int power(int a,int b)
{
    int p=1;
    for(int i=1;i<=b;i++)
    {
        p=p*a;
    }
    return p;
}
int main()
{
    int n;
    scanf("%d",&n);
    int x=0,i=1;
    while(x<=n)
    {
        x=power(2,i);
        i++;
    }
    int f=x;
    int b=f/2;
    int d1=f-n;
    int d2=n-b;
    if(d1<d2)
    {
        printf("%d",d1);
    }
    else
    {
        printf("%d",d2);
    }
}
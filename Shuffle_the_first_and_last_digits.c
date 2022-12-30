#include<stdio.h>
#include<math.h>
int main()
{
    int n,c=0,r;
    scanf("%d",&n);
    int t=n;
    int n1=n%10;
    int n2=n/10;
    while(n>0)
    {
        r=n%10;
        c++;
        n=n/10;
    }
    c=c-1;
    int c1=pow(10,c);
    int n3=t/c1;
    int n4=t%c1;
    int n6=n4/10;
    int n5=(n1*c1)+(n6*10+n3);
    printf("%d",n5);
    
}
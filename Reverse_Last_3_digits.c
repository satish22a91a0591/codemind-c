#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,rv=0;
    scanf("%d",&n);
    int a=n%1000;
    int b=n/1000;
    while(a!=0)
    {
        r=a%10;
        rv=rv*10+r;
        a=a/10;
    }
    int c=b*1000+rv;
    printf("%d",c);
    
    
}
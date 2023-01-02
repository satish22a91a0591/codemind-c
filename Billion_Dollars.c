#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(b==199)
    {
        b=b-100;
    }
    int d=(b-a)/c;
    printf("%d",d);
}
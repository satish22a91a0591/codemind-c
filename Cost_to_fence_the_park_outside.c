#include<stdio.h>
int main()
{
    int l,b,w,c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    int len=l+2*w;
    int bred=b+2*w;
    int ta=len*bred;
    int ina=l*b;
    int total=ta-ina;
    int tc=total*c;
    printf("%d",tc);
}
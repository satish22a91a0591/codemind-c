#include<stdio.h>
int main()
{
    int a,b,h;
    scanf("%d%d%d",&a,&b,&h);
    float A=0.5*(a+b)*h;
    printf("%.4f",A);
}
#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    float pf=0.12*a;
    float gs=a+b+c+pf;
    printf("%.2f
%.2f",pf,gs);
}
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int cp=(2*a*b*c*512)/1024;
    printf("%dkb",cp);
}
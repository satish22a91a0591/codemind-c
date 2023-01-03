#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    float s=0;
    for(int i=1;i<=a;i++)
    {
        s=s+(1.0/i);
    }
    printf("%.2f",s);
}
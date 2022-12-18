#include<stdio.h>
int main()
{
    int b,sum=0;
    scanf("%d",&b);
    for(int i=1;i<=b;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    float sum=0;
    for(int i=a;i<=b;i++)
    {
        sum=sum+sqrt(i);
    }
    printf("%.2f",sum);
}
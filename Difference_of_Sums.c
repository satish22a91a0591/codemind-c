#include<stdio.h>
int main()
{
    int n,sum=0,sq=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
        sq=sq+(i*i);
    }
    int b=sum*sum;
    int c=b-sq;
    printf("%d",c);
}
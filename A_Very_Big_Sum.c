#include<stdio.h>
int main()
{
    long int n,sum=0;
    scanf("%ld",&n);
    long int a[n];
    for(long int i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(long int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%ld",sum);
}
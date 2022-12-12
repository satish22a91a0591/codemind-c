#include<stdio.h>
int main()
{
    int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
int f=0,b,c,sum=0;
scanf("%d%d",&b,&c);
for(int i=0;i<n;i++)
{
    if(a[i]>=b&&a[i]<=c)
    {
        f++;
    }
    else
    {
        sum=sum+a[i];
    }
}
printf("%d",sum);
}
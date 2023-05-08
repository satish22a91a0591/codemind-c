#include<stdio.h>
int main()
{
    int n,s=0,max=1000;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<max)
        {
            max=a[i];
        }
    }
    printf("%d",max);
}
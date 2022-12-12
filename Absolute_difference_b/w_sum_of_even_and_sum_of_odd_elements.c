#include<stdio.h>
int main()
{
    int n,os=0,es=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            es=es+a[i];
        }
        else if(a[i]%2!=0)
        {
            os=os+a[i];
        }
    }
    if(os>es)
    {
        printf("%d",os-es);
    }
    else
    {
        printf("%d",es-os);
    }
}
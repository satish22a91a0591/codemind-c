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
    int x;
    scanf("%d",&x);
    int f=0,b=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>x)
        {
            f++;
        }
        else
        {
            b++;
        }
    }
    printf("%d",2*f+b);
}
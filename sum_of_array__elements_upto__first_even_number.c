#include<stdio.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
         if(a[i]%2==0)
        {
            break;
        }
        s=s+a[i];
    }
    printf("%d",s);
}
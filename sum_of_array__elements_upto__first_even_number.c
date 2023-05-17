#include<stdio.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            break;
        }
        s=s+a[i];
    }
    printf("%d",s);
}
#include<stdio.h>
int main()
{
    int n,b,c=0;
    scanf("%d%d",&n,&b);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%b!=0)
        {
            c++;
        }
    }
    printf("%d",c);
}
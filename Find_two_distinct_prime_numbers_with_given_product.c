#include<stdio.h>
int main()
{
    int n,x=0;
    scanf("%d",&n);
    int cnt=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            cnt=0;
        }
    }
    if(cnt==1)
    {
        printf("-1");
    }
}
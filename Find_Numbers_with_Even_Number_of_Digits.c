#include<stdio.h>
int main()
{
    int n,cnt=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        int t=a[i],c=0,r;
        while(t!=0)
        {
            r=t%10;
            c++;
            t=t/10;
        }
        if(c%2==0)
        {
            cnt++;
        }
    }
    printf("%d",cnt);
}
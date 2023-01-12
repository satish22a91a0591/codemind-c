#include<stdio.h>
int main()
{
    int n,m,s=0;
    scanf("%d%d",&n,&m);
    int x=n-1;
    int y=m-1;
    int a[n][m];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            scanf("%d",&a[i][j]);
            s=s+a[i][j];
        }
    }
    if(n>2&&m>2)
    {
    for(int i=2;i<n;i++)
    {
        for(int j=2;j<m;j++)
        {
            s=s-a[i][j];
        }
    }
    }
    printf("%d ",s);
}
#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(int i=1;i<=n;i++)
    {
        int s=0;
        for(int j=1;j<=m;j++)
        {
            scanf("%d",&a[i][j]);
            s=s+a[i][j];
        }
        printf("%d ",s);
        
    }
}
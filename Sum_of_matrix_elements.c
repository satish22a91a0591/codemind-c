#include<stdio.h>
int main()
{
    int r,c,s=0;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            scanf("%d",&a[i][j]);
            s=s+a[i][j];
        }
    }
    printf("%d",s);
}
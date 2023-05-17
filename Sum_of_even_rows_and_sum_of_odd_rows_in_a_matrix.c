#include<stdio.h>
int main()
{
    int r,c,s=0,sm=0;
    scanf("%d%d",&r,&c);
    int mat[r][c];
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            scanf("%d",&mat[i][j]);
            s=s+mat[i][j];
        }
    }
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            if(i%2==0)
            {
                sm=sm+mat[i][j];
            }
        }
    }
    printf("%d %d",s-sm,sm);
}
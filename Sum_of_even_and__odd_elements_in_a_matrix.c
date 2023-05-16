#include<stdio.h>
int main()
{
    int r,c,sm=0,s=0;
    scanf("%d%d",&r,&c);
    int mat[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
            if(mat[i][j]%2==0)
            {
                s=s+mat[i][j];
            }
            else
            {
                sm=sm+mat[i][j];
            }
        }
    }
    printf("%d %d",s,sm);
}
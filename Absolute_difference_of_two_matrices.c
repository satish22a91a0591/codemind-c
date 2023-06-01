#include<stdio.h>
int absl(int a,int b)
{
    if(a>b)
    {
        return a-b;
    }
    else
    {
        return b-a;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int mat1[n][n];
    int mat2[n][n];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    int j;
    for(int i=1;i<=n;i++)
    {
        int c;
        for(j=1;j<n;j++)
        {
            c=absl(mat1[i][j],mat2[i][j]);
            printf("%d ",c);
        }
        printf("%d
",c=absl(mat1[i][j],mat2[i][j]));
    }
}
#include<stdio.h>
int main()
{
    int n,c=0-1;
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        c++;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j+c);
        }
        printf("
");
    }
}
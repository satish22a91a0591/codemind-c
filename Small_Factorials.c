#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a,f=1;
        scanf("%d",&a);
        for(int j=1;j<=a;j++)
        {
            f=f*j;
        }
        printf("%d
",f);
    }
}
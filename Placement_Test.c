#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int x,t;
        scanf("%d%d",&x,&t);
        int a=x/10;
        printf("%d
",t*a);
    }
}
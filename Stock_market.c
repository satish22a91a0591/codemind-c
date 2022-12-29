#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if(b>a)
        {
            printf("PROFIT
");
        }
        else if(b<a)
        {
            printf("LOSS
");
        }
        else
        {
            printf("NEUTRAL
");
        }
    }
}
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        int x=a*2;
        int y=b*5;
        if(x<y)
        {
            printf("Candy
");
        }
        else if(x>y)
        {
            printf("Chocolate
");
        }
        else if(x==y)
        {
            printf("Either
");
        }
    }
}
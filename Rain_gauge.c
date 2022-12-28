#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a;
        scanf("%d",&a);
        if(a<3)
        {
            printf("LIGHT
");
        }
        else if(a>=3&&a<7)
        {
            printf("MODERATE
");
        }
        else
        {
            printf("HEAVY
");
        }
    }
}
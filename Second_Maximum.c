#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(b>a&&b<c)
        {
            printf("%d
",b);
        }
        else if(a>b&&a<c)
        {
            printf("%d
",a);
        }
        else if(a<b&&a>c)
        {
            printf("%d
",a);
        }
        else if(b<a&&b>c)
        {
            printf("%d
",b);
        }
        else if(c>a&&c<b)
        {
            printf("%d
",c);
        }
        else if(c<a&&c>b)
        {
            printf("%d
",c);
        }
    }
}
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a,b,r,c=0;
        scanf("%d%d",&a,&b);
        for(int j=a;j<=b;j++)
        {
            r=j%10;
            if(r==2||r==3||r==9)
            {
                c++;
            }
        }
        printf("%d
",c);
    }
}
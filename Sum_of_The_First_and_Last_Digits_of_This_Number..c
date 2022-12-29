#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int  a,r,rv=0;
        scanf("%d",&a);
        int n1=a%10;
        while(a!=0)
        {
            r=a%10;
            rv=rv*10+r;
            a=a/10;
        }
        int n2=rv%10;
        printf("%d
",n2+n1);
    }
}
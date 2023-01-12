#include<stdio.h>
#include<math.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a;
        scanf("%d",&a);
        int b=sqrt(a);
        if(b*b==a)
        {
            s=s+a;
        }
    }
    printf("%d",s);
}
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int t=n-1;
    int s=0;
    for(int i=1;i<=n;i++)
    {
        int a;
        scanf("%d",&a);
        s=s+pow(2,t)*a;
        t=t-1;
    }
    printf("%d",s);
}
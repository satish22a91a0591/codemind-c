#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a;
        scanf("%d",&a);
        if(n<=a)
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
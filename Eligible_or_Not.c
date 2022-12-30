#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(c>=a&&c<b)
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
        
    }
}
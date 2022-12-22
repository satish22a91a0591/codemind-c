#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    for( int i=1;i<=n;i++)
    {
        int c=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==9)
        {
            printf("%d ",i);
            count++;
        }
    }
    printf("
Total=%d",count);
}
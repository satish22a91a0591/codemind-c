#include<stdio.h>
int main()
{
    int n,c=0,cnt=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i%2==0)
        {
            if(a[i]%2==0)
            {
                c++;
            }
        }
        else
        {
            cnt++;
        }
    }
    if(cnt+c==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
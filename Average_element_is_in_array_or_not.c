#include<stdio.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    int avg=s/n;
    for(int i=0;i<n;i++)
    {
        if(avg==a[i])
        {
            printf("True");
            return 0;
        }
    }
    printf("False");
}
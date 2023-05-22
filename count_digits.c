#include<stdio.h>
int main()
{
    int  n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        int r,c=0;
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
            printf("1 ");
            continue;
        }
        while(a[i]!=0)
        {
            r=a[i]%10;
            c++;
            a[i]=a[i]/10;
        }
        printf("%d ",c);
    }
}
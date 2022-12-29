#include<stdio.h>
#include<math.h>
int main()
{
    int n,k1=0,k2=0,a,b;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            int a=pow(2,k1);
           printf("%d ",a);
           k1++;
        }
        else
        {
            int b=pow(3,k2);
           printf("%d ",b);
           k2++;
        }
    }
}
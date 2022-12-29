#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,k1=1,k2=0,b;
    scanf("%d",&n);
    for(int i=1;i<=n+1;i++)
    {
        if(i%2!=0)
        {
            a=pow(2,k1);
            printf("%d ",a);
            k1++;
        }
        else
        {
            if(i==2)
            {
                printf("0 ");
            }
            else
            {
                b=pow(3,k2);
                printf("%d ",b);
                k2++;
            }
        }
    }
}
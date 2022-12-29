#include<stdio.h>
#include<math.h>
int main()
{
    int n,k1=1,k2=1,a,b,j=1;
    scanf("%d",&n);
    for(int i=1;i<=n+1;i++)
    {
        if(i%2!=0)
        {
            if(i==1)
            {
                printf("0 ");
            }
            else
            {
                a=pow(2,k1);
                printf("%d ",a-1);
                k1++;
            }
        }
        else if(i%2==0)
        {
            if(i==2)
            {
                printf("0 ");
            }
            else
            {
                b=pow(3,j);
                printf("%d ",b-1);
                j++;
            }
        }
    }
}
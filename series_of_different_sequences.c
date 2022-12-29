#include<stdio.h>
#include<math.h>
int main()
{
    int n,k1=3,k2=-2,j=1;
    scanf("%d",&n);
    for(int i=1;i<=n+1;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",k1);
            k1=pow(3,j)+2;
            j++;
        }
        else
        {
            printf("%d ",k2);
            k2=5*k2+12;
        }
    }
}
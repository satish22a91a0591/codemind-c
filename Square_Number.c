#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=sqrt(n);
    for(int i=0;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            if(i*i+j*j==n)
            {
                printf("True");
                return 0;
            }
        }
    }
    printf("False");
}
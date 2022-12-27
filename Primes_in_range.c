#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,count=0;
    scanf("%d%d",&a,&b);
    if(a==1)
    {
        a++;
    }
    for(int i=a;i<=b;i++)
    {
        int c=0;
        for(int j=1;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==1)
        {
            count++;
        }
    }
    printf("%d",count);
}
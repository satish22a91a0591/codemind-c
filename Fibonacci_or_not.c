#include<stdio.h>
int main()
{
    int n,i,c,a=0,b=1,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(a==n)
        {
            printf("True");
            break;
        }
        count++;
        c=a+b;
        a=b;
        b=c;
    }
    if(count==n)
    {
        printf("False");
    }
}
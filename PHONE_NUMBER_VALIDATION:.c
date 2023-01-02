#include<stdio.h>
int main()
{
    int n,c=0,r;
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        r=n%10;
        c++;
        if(i==10&&r==0)
        {
            printf("Invalid");
        }
        if(c==9&&r!=0)
        {
            printf("Valid");
            break;
        }
        n=n/10;
    }
    if(c<9)
    {
     printf("Invalid");  
    }
}
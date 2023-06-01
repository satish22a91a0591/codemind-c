#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==1)
    {
        printf("0");
    }
    else if(n<=2)
    {
        printf("1");
    }
    else
    {
        printf("2");
    }
}
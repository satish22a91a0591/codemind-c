#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%3==1)
    {
        printf("HUGE");
    }
    else if(n%3==0)
    {
        printf("NORMAL");
    }
    else
    {
        printf("SMALL");
    }
}
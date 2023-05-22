#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n!=1)
    {
        if(n%5==0)
        {
            n=n/5;
        }
        else if(n%3==0)
        {
            n=n/3;
        }
        else if(n%2==0)
        {
            n=n/2;
        }
        else
        {
            printf("Not Ugly Number");
            return 0;
        }
    }
    printf("Ugly Number");
}
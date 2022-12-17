#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int dp=n*(n-3)/2;
    printf("%d",dp);
}
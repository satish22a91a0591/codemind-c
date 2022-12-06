#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m=(n%3600)/60;
    int s=(n%3600)-m*60;
    printf("H:M:S-%d:%d:%d",n/3600,m,s);
}
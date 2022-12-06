#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=1;i<=b;i++)
    {
        printf("%d x %d = %d
",a,i,i*a);
    }
}
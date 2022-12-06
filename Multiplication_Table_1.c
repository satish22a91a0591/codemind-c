#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=1;i<=12;i++)
    {
        printf("%d x %d = %d
",a,i,i*a);
    }
}
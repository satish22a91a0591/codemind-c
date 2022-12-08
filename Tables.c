#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=1;i<=b;i++)
    {
        if(i%2!=0)
        {
            printf("%d x %d = %d",a,i,i*a);
            printf("
");
        }
        
    }
}
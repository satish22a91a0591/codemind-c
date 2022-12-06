#include<stdio.h>
int main()
{
    for(int i=1;;i++)
    {
        int a;
        scanf("%d",&a);
        if(a==-1)
        {
            break;
        }
        else
        {
            printf("%d
",a*a);
        }
    }
}
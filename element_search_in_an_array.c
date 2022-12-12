#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        c++;
    }
    int b;
    scanf("%d",&b);
    for(int i=0;i<n;i++)
    {
        if(a[i]==b)
        {
            printf("True");
            c=c-10;
            break;
        }
    }
    if(c==n)
    {
        printf("False");
    }
}
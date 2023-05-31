#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=0,c=1;
    for(int i=1;i<n;i++)
    {
        if(a[max]==a[i])
        {
            c++;
        }
        else
        {
            c--;
        }
        if(c==0)
        {
            max=i;
            c=1;
        }
    }
    printf("%d",a[max]);
}
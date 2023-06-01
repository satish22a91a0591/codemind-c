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
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(n<=a[i])
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
}
#include<stdio.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    float avg=s/n;
    printf("%.5f",avg);
}
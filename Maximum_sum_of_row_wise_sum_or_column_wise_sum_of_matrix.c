#include<stdio.h>
int main()
{
    int r,c,max1=0,max=0;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
   for(int i=1;i<=r;i++)
   {
       int s=0;
       for(int j=1;j<=c;j++)
       {
           s=s+a[i][j];
       }
       if(max<s)
       {
           max=s;
       }
   }
   for(int i=1;i<=c;i++)
   {
       int sum=0;
       for(int j=1;j<=r;j++)
       {
           sum=sum+a[j][i];
       }
       if(sum>max1)
       {
           max1=sum;
       }
   }
   if(max>max1)
   {
       printf("%d",max);
   }
   else
   {
       printf("%d",max1);
   }
}    
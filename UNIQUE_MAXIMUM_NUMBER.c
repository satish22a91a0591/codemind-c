#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int max=0;
    int f=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        int c=0;
    for(int j=0; j<n; j++)
      {
            if(i!=j)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
      }
      if(c==0)
      {
          if(a[i]>max)
          {
              max=a[i];
              f=1;
          }
      }
       
    }
    if(f==1)
    {
    printf("%d",max);
    }
    else
    {
    printf("-1");
    }
}
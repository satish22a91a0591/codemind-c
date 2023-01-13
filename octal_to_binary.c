# include<stdio.h>
# include<math.h>
int main()
{
    int n,x,r,rem;
    int c=0,i=0;
    scanf("%d",&n);
    int a[100];
    while(n!=0)
    {
        r=n%10;
        x=x+r*pow(8,c);
        c++;
     n=n/10;
    }
    while(x!=0)
    {
        rem=x%2;
          x=x/2;
            a[i]=rem;
          i++;
    }
    for(int j=i; j>=0; j--)
    {
        printf("%d",a[j]);
    }
}
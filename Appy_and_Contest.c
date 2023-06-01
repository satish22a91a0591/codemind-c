#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a,b,c,d;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        int x=a/b;
        int y=a/c;
        int z=a/(b*c);
        if(x+y-z>=d)
        {
            printf("Win
");
        }
        else{
            printf("Lose
");
        }
    }
}
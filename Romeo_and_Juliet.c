#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int r=5*x;
    int r2=y*10;
    int tc=(r+r2)/z;
    printf("%d",tc);
}
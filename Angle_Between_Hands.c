#include<stdio.h>
#include<math.h>
int main()
{
    int h,r;
    scanf("%d:%d",&h,&r);
    //printf("%d %d",h,r);
    float hr=30*h;
    float m=5.5*r;
    float t=abs(hr-m);
    if(t>180)
    {
        printf("%.1f",360-t);
    }
    else
    {
        printf("%.1f",t);
    }
    
}
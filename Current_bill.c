#include<stdio.h>
int main()
{
    int u;
    scanf("%d",&u);
    float bill,y;
    if(u<=199)
    {
        bill=u*1.20;
    }
    else if(u>=200&&u<400)
    {
        bill=u*1.50;
    }
    else if(u>=400&&u<600)
    {
        bill=u*1.80;
    }
    else if(u>=600)
    {
        bill=u*2.00;
    }
    if(bill>400)
    {
        y=(0.15*bill)+bill;
    }
    else if(bill<400)
    {
        y=bill+100;
    }
    printf("%.2f",y);
}
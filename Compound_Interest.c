#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t;
    scanf("%f%f%f",&p,&r,&t);
    float a=pow(1+(r/100),t);
    float b=p*a;
    float ci=b-p;
    printf("%.2f",ci);
}
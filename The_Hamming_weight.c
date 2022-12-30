#include<stdio.h>
#include<string.h>
int main()
{
    int c=0;
    char a[500];
    scanf("%s",a);
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]=='1')
        {
            c++;
        }
    }
    printf("%d",c);
}
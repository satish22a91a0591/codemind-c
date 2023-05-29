# include<stdio.h>
int prime(int );
int main()
{
int n,c=0,count=0,r;
scanf("%d",&n);
if(prime(n))
{
	while(n!=0)
	{
r=n%10;
c++;
if(prime(r))
{
	count++;
	}
	n=n/10;	
}

if(c==count)
{
	printf("Mega Prime");
}
else
{
	printf("Not Mega Prime");
}
}
 else 
{
	printf("Not Mega Prime");
}
	
}
int prime(int n)
{
	int c=0;
	for(int i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
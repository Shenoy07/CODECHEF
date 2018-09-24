#include<stdio.h>

int main()
{

int t;
scanf("%d",&t);

while(t--)
{
int n,c;
scanf("%d %d",&n,&c);
int a[n];
int x;

for(int i=0;i<n;i++)
{	
	scanf("%d",&a[i]);		
}

for(int i=0;i<n;i++)
{
	if(c>=a[i])
	{
		c=c-a[i];
		x++;	
	}
}
if(x==n)
printf("YES\n");
else
printf("NO\n");
}
return 0;
}

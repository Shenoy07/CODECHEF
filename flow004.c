#include<stdio.h>
#include<stdlib.h>


void main()
{

int n,i,j ;
int a ,b,t;

scanf("%d",&t);

while (t--)
{
	scanf("%d",&n);
		
	a=n%10;
	
		while(n!=0)
			{
				b=n%10;
				n=n/10;
			}

		printf("%d\n",a+b);

}
	a=0;
	b=0;
	t--;

}

#include<stdio.h>
#include<stdlib.h>

void main()
{

int t,n,i,j,x;
int count=0;
scanf("%d",&t);
	
while(t!=0)
{

	scanf("%d",&n);
	
	while(n!=0)
	{
		x=n%10;			//6664%10=4
		
		if(x==4)
		count++;		//count=1
		
		n=n/10;			//n=666
							
	
	}	
		t--;

		printf("%d \n",count);
		count=0;
}
	



}

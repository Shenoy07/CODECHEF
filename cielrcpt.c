




#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int p;
	int t;
	int count=0;
	scanf("%d",&t);      //no of test cases

		while(t!=0)
		{	
			count=0;
			scanf("%d",&p); //input p
			
			
			for(int i=11;i>=0;i--)
				{												
					while(p>=pow(2,i))			
						{
							p=p-pow(2,i);				//we subtract the number and update the value of p and check for lower values
							count++;
						}	
				}		
			
			printf("%d\n",count);
				
			t--;
		}
	
			
return 0;

}

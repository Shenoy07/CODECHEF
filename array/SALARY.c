#include<stdio.h>
#include<stdlib.h>

int min(int arr[],int n)
{
	int mini=10000;

for(int i=0;i<n;i++)
{
	if(arr[i]<mini)
	mini=arr[i];

return mini;
}

}
int main()
{
int t;
int n;
scanf("%d",&t);
int w[n];
int count=0;
int sum=0;

while(t--)
{
	
scanf("%d",&n);

for(int i=0;i<n;i++)
{
scanf("%d",&w[i]);
sum=sum+w[i];
}






printf("%d\n",count);

}

return 0;
}


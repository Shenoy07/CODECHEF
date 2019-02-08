#include<stdio.h>
#include<stdlib.h>

int main()
{

int n,t,b;
int y;
int x;

int arr[100000];
scanf("%d",&t);

while(t--)
{

scanf("%d %d",&n,&b);

for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
x+=arr[i];
}
if(x%2!=0)
{
x=x+1;
}
y=x/b;

printf("%d",y);

return 0;
}






}

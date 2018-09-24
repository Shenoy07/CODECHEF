#include<stdio.h>
#include<stdbool.h>
int main()
{

int i,x,y,c,n,p,t,k;

scanf("%d",&t);

while(t--){

scanf("%d %d %d %d",&x,&y,&k,&n);

bool found = false;

for(i=0;i<n;i++)
{
scanf("%d %d",&p,&c);

if(c<=k && p>=x-y)
{

	found = true;
		
}
}
if(found==true)
printf("LuckyChef\n");
else
printf("UnluckyChef\n");
}

return 0;
}



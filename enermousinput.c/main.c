

#include <stdlib.h>
#include <stdio.h>


int main()
{
     long num;
    int count=0;
    int i;
    long n;
    long k;

     scanf("%d",&n);
     scanf("%d",&k);
    for (i=0;i<n;i++)
    {
        scanf("%d",&num);

        if(num%k==0)
        {
            count++;
        }
        }
          printf("%d",count);
return 0;
    }






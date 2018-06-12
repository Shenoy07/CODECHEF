#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x;
   float y;

   scanf("%d",&x);
   scanf("%f",&y);

    if(x>0 && x<=2000 && x%5==0 && y>=0 && y<=2000 && y>=x+0.5)
    {
       y=y-x-0.50;

    }
printf("%0.2f",y);
}

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int T;
    int x;
    int N;
    x=0;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&N);
    x=0;
    while(N>0)
    {
        x+=N%10;
        N=N/10;

    }

    printf("%d\n",x);
    }
   return 0;
}

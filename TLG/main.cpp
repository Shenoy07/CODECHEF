#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
    int N,max_lead=0,leader=0;
    int lead=0;
    int S;
    int T;
    int W;
    int first_score=0;
    int second_score=0;

    scanf("%d",&N);

    while(N--)
    {
        scanf("%d %d",&S,&T);

        first_score+=S;
        second_score+=T;

        lead=first_score-second_score;
        leader=1;

        if(lead<0)
        {
            lead=lead*(-1);
            leader=2;
        }

        if(lead>max_lead)
        {
            max_lead=lead;
            W=leader;
        }


    }

    printf("%d %d\n",W,max_lead);
        return 0;



}



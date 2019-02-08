#include <iostream>
#include <time.h>
using namespace std;
int main ()
{
	clock_t start,end;
	int i;
	  start = clock();
     

	for(i=0;i<100000000;i++){
	  cout << "*mnin";
	}

	
	end = clock();
       int  cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	cout <<cpu_time_used;
	cout <<endl;




  return 0;
}

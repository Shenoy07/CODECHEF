#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int n[t];
	for(int i=0;i<t;i++)
	{
		cin>>n[i];
		cout<<endl;
	}
	sort(n,n+t);
	for(int i=0;i<t;i++)
	{
		cout<<n[i]<<endl;
	}
	return 0;
}

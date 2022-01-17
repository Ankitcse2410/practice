#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,x,k; cin>>t;
	while(t--)
	{
		cin>>x>>k;
		int count=0;
		while(x!=0)
		{
			x=ceil(x/k);
			count++;
		}
		cout<<count<<endl;
	}
}
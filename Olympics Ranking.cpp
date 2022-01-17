#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int sum=0,G1,S1,B1,G2,S2,B2;
		cin>>G1>>S1>>B1>>G2>>S2>>B2;
		int t1=G1+S1+B1;
		int t2=G2+S2+B2;
		if(t1>t2) cout<<"1"<<endl;
		else cout<<"2"<<endl;
	}
}
#include<bits/stdc++.h>
using namespace std;
// Method :- 1
//int sum(int n)
//{
//	return n*(n+1)/2;
//}

// Method :- 2
//int sum(int n)
//{
//	int sum=0;
//	for(int i=1;i<n+1;i++) sum=sum+i;
//	return sum;
//}

// Method :- 3
int sum(int n)
{
	int sum=0;
	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<i+1;j++)
		{
			sum=sum+1;
		}
	}
	return sum;
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int num; cin>>num;
		cout<<sum(num)<<endl;
	}
}
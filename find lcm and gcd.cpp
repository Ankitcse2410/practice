#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution{
	public:
		vector<ll> lcm_and_Gcd(ll a, ll b)
		{
			return {(a*b)/gcd(a, b), gcd(a, b)};
		}
		ll gcd(ll a, ll b)
		{
			if(a==0)
			{
				return b;
			}
			return gcd(b % a, a);
		}
};

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int a,b; cin>>a>>b;
		Solution ob;
		vector<ll> ans = ob.lcm_and_Gcd(a, b);
		cout<<ans[0]<<" "<<ans[1]<<endl;
	}
	return 0;
}
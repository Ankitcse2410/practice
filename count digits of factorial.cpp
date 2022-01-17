#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
		int facDigits(int n)
		{
			if(n<=1) return 1;
			double ans=0;
			for(int i=1;i<=n;i++)
			{
				ans+=log10(i);		//log10(n!)=log(1) + log(2) + .... + log(n)
			}
			//return floor(ans) + 1;
			return ceil(ans);
		}
};
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		Solution obj;
		cout<<obj.facDigits(n)<<"\n";
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
		int maxSubArray(vector<int>& nums)
		{
			int result = nums[0], n = nums.size();
			if(n == 1) return nums[0];
			int sum = 0;
			for(int i = 0; i < n; i++)
			{
				sum = 0;
				for(int j = i; j < n; j++)
				{
					sum = sum + nums[j];
					if(result < sum)
					{
						result = sum;
					}
				}
			}
			return result;
		}
};

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		vector<int> nums(n);
		for(int i=0;i<n;i++) cin>>nums[i];
		Solution ob;
		cout<<ob.maxSubArray(nums)<<endl;
	}
}
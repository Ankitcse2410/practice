//Given an integer array nums, 
//return true if any value appears at least twice in the array,
//and return false if every element is distinct.

#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
		bool containsDuplicate(vector<int> &nums)
		{
			int n = nums.size();
			if(n==1) return false;
			sort(nums.begin(), nums.end());
			for(int i=0;i<n;i++)
			{
				if(nums[i+1]==nums[i])
				{
					return true;
				}
			}
			return false;
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
		cout<<ob.containsDuplicate(nums)<<endl;
	}
}
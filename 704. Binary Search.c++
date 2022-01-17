#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
		int search(vector<int>& nums, int target) 
    	{
        	int n = nums.size();
        	int pivot, left = 0, right = n - 1;
        	while(left <= right){
            	pivot = left + ((right - left) >> 1);
            	if(nums[pivot] == target) return pivot;
            	if(nums[pivot] > target) right = pivot - 1;
            	else left = pivot + 1;
        	}
        	return -1;
    	}
};

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int target; cin>>target;
		int n; cin>>n;
		vector<int> nums(n);
		for(int i=0;i<n;i++) nums[i];
		Solution ob;
		cout<<ob.search(nums, target)<<endl;
	}
}
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=nums[0] , n= nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum += nums[i];
            //cout<<ans<<" "<<sum;
            ans = max(ans,sum);
            //cout<<"\n"<<ans<<" "<<sum<<endl;
            if(sum<0)
                sum=0;
            //cout<<ans<<" "<<sum<<endl;
            //cout<<"\n";
        }
        return ans;
    }
};

int main() {
	int t,n; cin>>t;
	while(t--){
		cin>>n;
		vector<int> nums(n);
		for(int i=0;i<n;i++) cin>>nums[i];
		Solution ob;
		cout<<ob.maxSubArray(nums);
		
	}
	return 0;
}
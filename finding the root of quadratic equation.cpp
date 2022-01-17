//Given three numbers A,B and C. Find roots of quadratic equation
// Ax2 + Bx + C = 0. (A not equal to  0)
// Question link given below:-
// https://practice.geeksforgeeks.org/problems/java-operatorsarithmetic-set-12417/1#
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<double> FindRoots(int a, int b, int c)
    {
    	vector<double> ans;
    	if(a==0)
    	{
    		ans.push_back(-1);
    		return ans;
		}
		int d = ((b * b) - (4 * a * c));
		double r1, r2, sqrt_val = sqrt(d);
		
		if(d>0)
		{
			r1 = (-b - sqrt_val) / (2 * a);
			r2 = (-b + sqrt_val) / (2 * a);
			ans.push_back(r1);
			ans.push_back(r2);
			sort(ans.begin(),ans.end());
			return ans;
		}
		else if(d==0)
		{
			ans.push_back(-(double)b / (2 * a));
			ans.push_back(-(double)b / (2 * a));
			return ans;
		}
		else //d<0
		{
			ans.push_back(-1);
			return ans;
		}
	}
};

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int a,b,c; cin>>a>>b>>c;
		Solution obj;
		vector<double>ans = obj.FindRoots(a, b, c);
		if(ans.size() == 1)
		{
			cout << (int)ans[0] << "\n";
			continue;
		}
		for(auto i: ans)
			cout  << fixed << setprecision(6) << i << " ";
		cout << "\n";
	}
	return 0;
}
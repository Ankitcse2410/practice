/*                                 Leetcode Problem: 283. Move Zeroes        */

//Given an integer array nums, move all 0's to the end of it 
//while maintaining the relative order of the non-zero elements.

//example:	Input: nums = [0,1,0,3,12]
//			Output: [1,3,12,0,0]

//constraints:-	
//1 <= nums.length <= 10^4
//-2^31 <= nums[i] <= 2^31 - 1

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    
	for(int i = 0; i < n; i++) cin>>arr[i];
    
    int right = 0, left = 0;
    
    while(left < n) 
    {
        if(arr[left] != 0) {
            swap(arr[right], arr[left]);
            right++;
        }
        left++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
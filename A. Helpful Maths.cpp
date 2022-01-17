#include"bits/stdc++.h"
using namespace std;
int main(){
	string sum; cin>>sum;
	int l=sum.length();
	int arr[l],j=0;
	for(int i=0;i<l;i++){
		if(sum[i]!='+'){
			arr[j]=sum[i]-48;
			j++;
		}
	}
	sort(arr,arr+j);
	for(int i=0;i<j-1;i++){
		cout<<arr[i]<<"+";
	}
	cout<<arr[j-1];
	cout<<endl;
}

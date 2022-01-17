#include"bits/stdc++.h"
using namespace std;
int main(){
	string sum; cin>>sum;
	int l=sum.length();
	sort(sum.begin(),sum.end());
	for(int i=0;i<l-1;i++){
		if(sum[i]=='+'){
			continue;
		}
		cout<<sum[i]<<"+";
	}
	cout<<sum[l-1]<<endl;
}

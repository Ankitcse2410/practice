#include"bits/stdc++.h"
using namespace std;
int main(){
	string sum; cin>>sum;
	int l=sum.length();
	string srt;
	for(int i=0;i<l;i++){
		if(sum[i]=='+'){
			continue;
		}
		srt= srt+sum[i];
	}
	sort(srt.begin(),srt.end());
	for(int i=0;i<srt.length()-1;i++){
		cout<<srt[i]<<"+";
	}
	cout<<srt[srt.length()-1]<<endl;
}

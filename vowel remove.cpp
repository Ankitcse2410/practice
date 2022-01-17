#include"bits/stdc++.h"
using namespace std;
int main(){
	string str; cin>>str;
	int len=str.length();
	for(int i=0;i<len;i++){
		if(str[i]>=65 && str[i]<=90){
			str[i]=str[i]+32;
		}
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y'){
			continue;
		}
		cout<<'.'<<str[i];
	}
	cout<<endl;
	
}

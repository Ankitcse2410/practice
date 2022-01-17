#include"bits/stdc++.h"
using namespace std;
int main(){
	int tc; cin>>tc;
	while(tc--){
		string str; cin>>str;
		int i,len=str.length();
		if(len%2==0){
			if(str[0]==')' || str[len-1]=='('){
				cout<<"NO";
			}
			else{
				cout<<"YES";
			}
		}
		else{
			cout<<"NO";
		}
		cout<<endl;
	}
}

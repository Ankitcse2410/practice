#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string str; cin>>str;
	int hash[26]={0};
	//memset(hash,0,sizeof hash);
	for(int i=0;i<str.length();i++)
	{
		hash[str[i]-'a']++;
	}
	int cnt=0;
	for(int i=0;i<26;i++){
		if(hash[i]>0) cnt++;
	}
	if(cnt%2==0){
		cout<<"CHAT WITH HER!"<<endl;
	}
	else cout<<"IGNORE HIM!"<<endl;
}
#include"bits/stdc++.h"
using namespace std;
int main(){
	string str1,str2; cin>>str1>>str2;
	int len1=(int)str1.length();
	int len2=(int)str2.length();
	int flag=0;
	for(int i=0;i<len1 && i< len2;i++)
	{
		if(str1[i]>=65 && str1[i]<=90){
			str1[i]=str1[i]+32;
		}
		if(str2[i]>=65 && str2[i]<=90){
			str2[i]=str2[i]+32;
		}
		//cout<<str1[i]<<" "<<str2[i]<<endl;
		if(str1[i]==str2[i])
		{
			continue;
		}
		else
		{
			flag=1;
			if(str1[i]>str2[i]){
				cout<<"1"; break;
			}
			if(str1[i]<str2[i]){
				cout<<"-1";
				break;
			}
		}
	}
	if(flag==0)
	{
		if(len1>len2){
			cout<<"1";
		}
		if(len1<len2){
			cout<<"-1";
		}
		if(len1==len2){
			cout<<"0";
		}
	}
}

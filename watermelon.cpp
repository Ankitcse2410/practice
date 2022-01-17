#include "iostream"
using namespace std;
int main(){
	int w=0;
	cin>>w;
	int a=1;
	int b=w-1;
	bool flag = false;
	while(((a+b)==w)&&(a!=w)&&(b!=0)){
		if((a%2==0)&&(b%2==0)){
			cout<<"YES";
			flag = true;
			break;
		}
		a++;
		b--;
	}
	if(!flag) cout<<"NO";
	return 0;
}

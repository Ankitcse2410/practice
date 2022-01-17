#include"iostream"
using namespace std;
int main(){
	int n,t,i;
	cin>>t;
	for(i=1;i<=t;i++){
		cin>>n;
		int fact=1;
		while(n>=1){
			fact=fact*n;
			n--;
		}
		cout<<fact<<endl;
	}
	return 0;	
}
